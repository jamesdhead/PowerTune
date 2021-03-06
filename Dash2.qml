import QtQuick 2.4
import QtGraphicalEffects 1.0
import QtQuick.Window 2.1
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4
import QtQuick.Extras 1.4




Rectangle {
    width: parent.width
    height: parent.height
    color: "black"
//Gauge 1 Left Top Water Temp

    Rectangle {
        CircularGauge {
            height: parent.height
            width: parent.width
            value: Math.round(Dashboard.Watertemp * 1.8 +32)
            anchors.verticalCenter: parent.verticalCenter
            anchors.top: parent.top
            minimumValue: 0
            maximumValue: 270

            style: HalfGaugeStyle {}
        }

        color: "transparent"

        height: parent.width / 3.7
        width: height
        x : parent.width /27
        y : parent.width /27

        Text {
            text: "°F"
            font.pixelSize: (parent.width / 12)
             y: (parent.width / 5)
            font.bold: true
            font.family: "Eurostile"
            color: "white"
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Text {
            text: "COOLANT TEMP"
            font.pixelSize: (parent.width / 14)
             y: (parent.width / 2.4)
            font.bold: true
            font.family: "Eurostile"
            color: "white"
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Text {
            id: coolant
            text: Math.round(Dashboard.Watertemp * 1.8 +32)
            font.pixelSize: (parent.width / 10)
            font.bold: true
            font.family: "Eurostile"
            y: (parent.width / 3.5)
            color: "white"
            anchors.horizontalCenter: parent.horizontalCenter
        }

        DropShadow {
                anchors.fill: coolant
                horizontalOffset: 0
                verticalOffset: 8
                radius: 4.0
                samples: 16
                color: "black"
                source: coolant
            }
        HalfNeedle {
            id: waterneedle
            anchors.verticalCenterOffset: 0
            anchors.centerIn: parent
            value: (Dashboard.Watertemp * 1.8 + 32) / 5.13


        }

    }
    //Gauge 2 Left bottom Intake Air Temp
        Rectangle {
            CircularGauge {
                height: parent.height
                width: parent.width
                value: Math.round(Dashboard.Intaketemp * 1.8 +32)
                anchors.verticalCenter: parent.verticalCenter
                anchors.top: parent.top
                minimumValue: 0
                maximumValue: 220

                style: HalfGaugeStyle {}
            }

            color: "transparent"

            height: parent.width / 3.7
            width: height
            x: parent.width /27
            y: parent.height /2
            Text {
                text: "°F"
                font.pixelSize: (parent.width / 12)
                 y: (parent.width / 5)
                font.bold: true
                font.family: "Eurostile"
                color: "white"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Text {
                text: "INTAKE AIR TEMP"
                font.pixelSize: (parent.width / 14)
                 y: (parent.width / 2.4)
                font.bold: true
                font.family: "Eurostile"
                color: "white"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Text {
                id: air
                text: Math.round(Dashboard.Intaketemp * 1.8 +32)
                font.pixelSize: (parent.width / 10)
                font.bold: true
                font.family: "Eurostile"
                y: (parent.width / 3.5)
                color: "white"
                anchors.horizontalCenter: parent.horizontalCenter
            }

            DropShadow {
                    anchors.fill: air
                    horizontalOffset: 0
                    verticalOffset: 8
                    radius: 4.0
                    samples: 16
                    color: "black"
                    source: air
                }
            HalfNeedle {
                anchors.verticalCenterOffset: 0
                anchors.centerIn: parent
                value: (Dashboard.Intaketemp * 1.8 +32) / 4.150943


            }

        }
        //Gauge 3 top middle Boost Gauge (not yet finished)
            Rectangle {
                CircularGauge {
                    height: parent.height
                    width: parent.width
                    value: Dashboard.speed
                    anchors.verticalCenter: parent.verticalCenter
                    anchors.top: parent.top
                    minimumValue: -30
                    maximumValue: 30

                    style: HalfGaugeStyle {}
                }

                color: "transparent"

                height: parent.width / 3.7
                width: height
                x: parent.width /2.73
                y : parent.width /27

                Text {
                    text: "PSI"
                    font.pixelSize: (parent.width / 12)
                     y: (parent.width / 5)
                    font.bold: true
                    font.family: "Eurostile"
                    color: "white"
                    anchors.horizontalCenter: parent.horizontalCenter
                }
                Text {
                    text: "BOOST"
                    font.pixelSize: (parent.width / 14)
                     y: (parent.width / 2.4)
                    font.bold: true
                    font.family: "Eurostile"
                    color: "white"
                    anchors.horizontalCenter: parent.horizontalCenter
                }
                Text {
                    //id: coolant
                    text: Dashboard.Watertemp
                    font.pixelSize: (parent.width / 10)
                    font.bold: true
                    font.family: "Eurostile"
                    y: (parent.width / 3.5)
                    color: "white"
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                DropShadow {
                      //  anchors.fill: coolant
                        horizontalOffset: 0
                        verticalOffset: 8
                        radius: 4.0
                        samples: 16
                        color: "black"
                        source: coolant
                    }
/*
                Needle90degrTopright {
                    //Needle for the positive boost display
                    anchors.verticalCenterOffset: 0
                    anchors.centerIn: parent
                    value: 23//(Dashboard.Watertemp * 1.8 +32)
 }
*/


                Needle90Left {
                    //Needle for the positive boost display
                    anchors.verticalCenterOffset: 0
                    anchors.centerIn: parent
                    value: 50//(Dashboard.Watertemp * 1.8 +32)
                }

            }
            //Gauge 4 bottom middle Injector Duty
                Rectangle {
                    CircularGauge {
                        height: parent.height
                        width: parent.width
                        value: Dashboard.Iscvduty
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.top: parent.top
                        minimumValue: 0
                        maximumValue: 100

                        style: HalfGaugeStyle {}
                    }

                    color: "transparent"

                    height: parent.width / 3.7
                    width: height
                    x: parent.width /2.73
                    y: parent.height /2

                    Text {
                        text: "%"
                        font.pixelSize: (parent.width / 12)
                         y: (parent.width / 5)
                        font.bold: true
                        font.family: "Eurostile"
                        color: "white"
                        anchors.horizontalCenter: parent.horizontalCenter
                    }
                    Text {
                        text: "INJECTOR DUTY"
                        font.pixelSize: (parent.width / 14)
                         y: (parent.width / 2.4)
                        font.bold: true
                        font.family: "Eurostile"
                        color: "white"
                        anchors.horizontalCenter: parent.horizontalCenter
                    }
                    Text {
                        //id: coolant
                        text: Dashboard.Iscvduty
                        font.pixelSize: (parent.width / 10)
                        font.bold: true
                        font.family: "Eurostile"
                        y: (parent.width / 3.5)
                        color: "white"
                        anchors.horizontalCenter: parent.horizontalCenter
                    }

                    DropShadow {
                          //  anchors.fill: coolant
                            horizontalOffset: 0
                            verticalOffset: 8
                            radius: 4.0
                            samples: 16
                            color: "black"
                            source: coolant
                        }
                    HalfNeedle {
                        //id: waterneedle
                        anchors.verticalCenterOffset: 0
                        anchors.centerIn: parent
                        value: 0


                    }


                }
                //Gauge 5 top right
                    Rectangle {
                        CircularGauge {
                            height: parent.height
                            width: parent.width
                            value: Dashboard.speed
                            anchors.verticalCenter: parent.verticalCenter
                            anchors.top: parent.top
                            minimumValue: 0
                            maximumValue: 20

                            style: HalfGaugeStyle {}
                        }

                        color: "transparent"

                        height: parent.width / 3.7
                        width: height
                        x: parent.width /1.44
                        y : parent.width /27

                        Text {
                            text: "A/F"
                            font.pixelSize: (parent.width / 12)
                             y: (parent.width / 5)
                            font.bold: true
                            font.family: "Eurostile"
                            color: "white"
                            anchors.horizontalCenter: parent.horizontalCenter
                        }
                        Text {
                            text: "AIR FUEL RATIO"
                            font.pixelSize: (parent.width / 14)
                             y: (parent.width / 2.4)
                            font.bold: true
                            font.family: "Eurostile"
                            color: "white"
                            anchors.horizontalCenter: parent.horizontalCenter
                        }
                        Text {
                            //id: coolant
                            text: Dashboard.Watertemp
                            font.pixelSize: (parent.width / 10)
                            font.bold: true
                            font.family: "Eurostile"
                            y: (parent.width / 3.5)
                            color: "white"
                            anchors.horizontalCenter: parent.horizontalCenter
                        }

                        DropShadow {
                              //  anchors.fill: coolant
                                horizontalOffset: 0
                                verticalOffset: 8
                                radius: 4.0
                                samples: 16
                                color: "black"
                                source: coolant
                            }
                        HalfNeedle {
                            //id: waterneedle
                            anchors.verticalCenterOffset: 0
                            anchors.centerIn: parent
                            value: 0//(Dashboard.Watertemp * 1.8 +32)


                        }


                    }
                    //Gauge 6 bottom right Knock
                        Rectangle {
                            CircularGauge {
                                height: parent.height
                                width: parent.width
                                value: Dashboard.Knock
                                anchors.verticalCenter: parent.verticalCenter
                                anchors.top: parent.top
                                minimumValue: 0
                                maximumValue: 140

                                style: HalfGaugeStyle {}
                            }

                            color: "transparent"

                            height: parent.width / 3.7
                            width: height
                            x: parent.width /1.44
                            y : parent.height /2
                       /*     Text {
                                text: "PSI"
                                font.pixelSize: (parent.width / 12)
                                 y: (parent.width / 5)
                                font.bold: true
                                font.family: "Eurostile"
                                color: "white"
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            */
                            Text {
                                text: "KNOCK"
                                font.pixelSize: (parent.width / 14)
                                 y: (parent.width / 2.4)
                                font.bold: true
                                font.family: "Eurostile"
                                color: "white"
                                anchors.horizontalCenter: parent.horizontalCenter
                            }
                            Text {
                                //id: coolant
                                text: Dashboard.Knock
                                font.pixelSize: (parent.width / 10)
                                font.bold: true
                                font.family: "Eurostile"
                                y: (parent.width / 3.5)
                                color: "white"
                                anchors.horizontalCenter: parent.horizontalCenter
                            }

                            DropShadow {
                                  //  anchors.fill: coolant
                                    horizontalOffset: 0
                                    verticalOffset: 8
                                    radius: 4.0
                                    samples: 16
                                    color: "black"
                                    source: coolant
                                }
                            HalfNeedle {
                                //id: waterneedle
                                anchors.verticalCenterOffset: 0
                                anchors.centerIn: parent
                                value: Dashboard.Knock / 2.641509


                            }


                        }
}

