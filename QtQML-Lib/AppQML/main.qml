import QtQuick 2.12
//import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.3

import Lib.LibAppQML 1.0
import Qt.ItemModel 1.0
import Qt.ControllerItem 1.0



Rectangle {
    id: root
    visible: true
    width: 640
    height: 480

    property int  isLogged: 0
    LibAppQML{
        id: myLibAppQML
        onLoginSuccess: {
            console.log("onLoginSuccess")
            root.isLogged = 1
            myLibAppQML.status = ""
        }
        onLoginFalse: {
            console.log("onLoginFalse")
            root.isLogged = 0
        }
    }
    ItemModel {
        id: itemModel
    }
    ControllerItem {
         id: signalsControllerItem
    }
//########################################


    Item{
        id: headerBtn
        width: parent.width
        height: 60
        Button{
            text: "Back"
        }
        Button{
            id: btnLogout
            text: "Logout"
            anchors.right: parent.right
            onClicked: {
                root.isLogged = 0
            }
        }
    }

    Column{
        visible: isLogged == 0
        id: login
        width: 300
        anchors.centerIn: parent
        spacing: 20
        TextField{
            id: userName
            placeholderText: "User Name"
            width: parent.width
        }
        TextField{
            id: passWord
            placeholderText: "Password"
            width: parent.width
        }
        Button{
            id: btnLogin
            text: "Login"
            onClicked: {
                console.log(userName.text, passWord.text)
                myLibAppQML.login(userName.text, passWord.text)
            }
        }
        Label{
            color: "red"
            text: myLibAppQML.status
            font.pixelSize: 22
        }
    }

    ColumnLayout  {
        y: 60
        visible: isLogged == 1
        id: logout
        anchors.fill: parent
        anchors.margins: 50
        anchors.topMargin: 70
        spacing: 20

        TextField {
            id: inputField
            Layout.fillWidth: true
            placeholderText: qsTr("Enter item text")
        }

        RowLayout {
            Layout.fillWidth: true

            Button {
                text: qsTr("Add")
                onClicked: {
                    itemModel.addItem(inputField.text);
                    inputField.text = "";
                }
            }
        }

        ListView {
            id: listView
            Layout.fillWidth: true
            Layout.fillHeight: true
            model: itemModel
            anchors.bottomMargin: 10

            delegate: Row{
                spacing: 15
                TextField{
                    id: upDate
                    text: model.text
                    onTextChanged: {
                        model.text
                    }
                }
                Button {
                    text: qsTr("Remove")
                    onClicked: itemModel.removeItem(listView.currentIndex)
                }

                Button {
                    text: qsTr("Update")
                    onClicked: {
                        itemModel.updateItem(listView.currentIndex, upDate.text);
                        //                        upDate.text =  model.text;
                    }
                }
            }
        }
    }
//    Connections {
//        target: signalsControllerItem

//        onSignalAdd: {
//            console.log("Emit SignalAdd")
//        }
//    }


    states: [
        State {
            name: "State1"
        },
        State {
            name: "State2"
        }
    ]
}
