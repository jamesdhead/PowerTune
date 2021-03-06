#ifndef DASHBOARD_H
#define DASHBOARD_H

#endif // DASHBOARD_H

#include <QObject>

class DashBoard : public QObject
{
    Q_OBJECT

    // Advanced Info FD3S
    Q_PROPERTY(qreal revs READ revs WRITE setRevs NOTIFY revsChanged)
    Q_PROPERTY(qreal Intakepress READ Intakepress WRITE setIntakepress NOTIFY IntakepressChanged)
    Q_PROPERTY(qreal PressureV READ PressureV WRITE setPressureV NOTIFY PressureVChanged)
    Q_PROPERTY(qreal ThrottleV READ ThrottleV WRITE setThrottleV NOTIFY ThrottleVChanged)
    Q_PROPERTY(qreal Primaryinp READ Primaryinp WRITE setPrimaryinp NOTIFY PrimaryinpChanged)
    Q_PROPERTY(qreal Fuelc READ Fuelc WRITE setFuelc NOTIFY FuelcChanged)
    Q_PROPERTY(qreal Leadingign READ Leadingign WRITE setLeadingign NOTIFY LeadingignChanged)
    Q_PROPERTY(qreal Trailingign READ Trailingign WRITE setTrailingign NOTIFY TrailingignChanged)
    Q_PROPERTY(qreal Fueltemp READ Fueltemp WRITE setFueltemp NOTIFY FueltempChanged)
    Q_PROPERTY(qreal Moilp READ Moilp WRITE setMoilp NOTIFY MoilpChanged)
    Q_PROPERTY(qreal Boosttp READ Boosttp WRITE setBoosttp NOTIFY BoosttpChanged)
    Q_PROPERTY(qreal Boostwg READ Boostwg WRITE setBoostwg NOTIFY BoostwgChanged)
    Q_PROPERTY(qreal Watertemp READ Watertemp WRITE setWatertemp NOTIFY WatertempChanged)
    Q_PROPERTY(qreal Intaketemp READ Intaketemp WRITE setIntaketemp NOTIFY IntaketempChanged)
    Q_PROPERTY(qreal Knock READ Knock WRITE setKnock NOTIFY KnockChanged)
    Q_PROPERTY(qreal BatteryV READ BatteryV WRITE setBatteryV NOTIFY BatteryVChanged)
    Q_PROPERTY(qreal speed READ speed WRITE setSpeed NOTIFY speedChanged)
    Q_PROPERTY(qreal Iscvduty READ Iscvduty WRITE setIscvduty NOTIFY IscvdutyChanged)
    Q_PROPERTY(qreal O2volt READ O2volt WRITE setO2volt NOTIFY O2voltChanged)
    Q_PROPERTY(qreal na1 READ na1 WRITE setna1 NOTIFY na1Changed)
    Q_PROPERTY(qreal Secinjpulse READ Secinjpulse WRITE setSecinjpulse NOTIFY SecinjpulseChanged)
    Q_PROPERTY(qreal na2 READ Intaketemp WRITE setna2 NOTIFY na2Changed)
    Q_PROPERTY(qreal na2 READ Intaketemp WRITE setna2 NOTIFY na2Changed)
    Q_PROPERTY(qreal InjDuty READ InjDuty WRITE setInjDuty NOTIFY InjDutyChanged)
    Q_PROPERTY(qreal pim READ pim WRITE setpim NOTIFY pimChanged)
    Q_PROPERTY(qreal vta1 READ vta1 WRITE setvta1 NOTIFY vta1Changed)
    Q_PROPERTY(qreal vta2 READ vta2 WRITE setvta2 NOTIFY vta2Changed)
    Q_PROPERTY(qreal vmop READ vmop WRITE setvmop NOTIFY vmopChanged)
    Q_PROPERTY(qreal wtrt READ wtrt WRITE setwtrt NOTIFY wtrtChanged)
    Q_PROPERTY(qreal airt READ airt WRITE setairt NOTIFY airtChanged)
    Q_PROPERTY(qreal fuelt READ fuelt WRITE setfuelt NOTIFY fueltChanged)
    Q_PROPERTY(qreal O2S READ O2S WRITE setO2S NOTIFY O2SChanged)

    // Flags

    Q_PROPERTY(qreal Flag1 READ Flag1 WRITE setFlag1 NOTIFY Flag1Changed)
    Q_PROPERTY(qreal Flag2 READ Flag2 WRITE setFlag2 NOTIFY Flag2Changed)
    Q_PROPERTY(qreal Flag3 READ Flag3 WRITE setFlag3 NOTIFY Flag3Changed)
    Q_PROPERTY(qreal Flag4 READ Flag4 WRITE setFlag4 NOTIFY Flag4Changed)
    Q_PROPERTY(qreal Flag5 READ Flag5 WRITE setFlag5 NOTIFY Flag5Changed)
    Q_PROPERTY(qreal Flag6 READ Flag6 WRITE setFlag6 NOTIFY Flag6Changed)
    Q_PROPERTY(qreal Flag7 READ Flag7 WRITE setFlag7 NOTIFY Flag7Changed)
    Q_PROPERTY(qreal Flag8 READ Flag8 WRITE setFlag8 NOTIFY Flag8Changed)
    Q_PROPERTY(qreal Flag9 READ Flag9 WRITE setFlag9 NOTIFY Flag9Changed)
    Q_PROPERTY(qreal Flag10 READ Flag10 WRITE setFlag10 NOTIFY Flag10Changed)
    Q_PROPERTY(qreal Flag11 READ Flag11 WRITE setFlag11 NOTIFY Flag11Changed)
    Q_PROPERTY(qreal Flag12 READ Flag12 WRITE setFlag12 NOTIFY Flag12Changed)
    Q_PROPERTY(qreal Flag13 READ Flag13 WRITE setFlag13 NOTIFY Flag13Changed)
    Q_PROPERTY(qreal Flag14 READ Flag14 WRITE setFlag14 NOTIFY Flag14Changed)
    Q_PROPERTY(qreal Flag15 READ Flag15 WRITE setFlag15 NOTIFY Flag15Changed)
    Q_PROPERTY(qreal Flag16 READ Flag16 WRITE setFlag16 NOTIFY Flag16Changed)


    //Adaptronic extra

    Q_PROPERTY(qreal MAP READ MAP WRITE setMAP NOTIFY MAPChanged)
    Q_PROPERTY(qreal AUXT READ AUXT WRITE setAUXT NOTIFY AUXTChanged)
    Q_PROPERTY(qreal AFR READ AFR WRITE setAFR NOTIFY AFRChanged)
    Q_PROPERTY(qreal TPS READ TPS WRITE setTPS NOTIFY TPSChanged)
    Q_PROPERTY(qreal IdleValue READ IdleValue WRITE setIdleValue NOTIFY IdleValueChanged)
    Q_PROPERTY(qreal MVSS READ MVSS WRITE setMVSS NOTIFY MVSSChanged)
    Q_PROPERTY(qreal SVSS READ SVSS WRITE setSVSS NOTIFY SVSSChanged)
    Q_PROPERTY(qreal Inj1 READ Inj1 WRITE setInj1 NOTIFY Inj1Changed)
    Q_PROPERTY(qreal Inj2 READ Inj2 WRITE setInj2 NOTIFY Inj2Changed)
    Q_PROPERTY(qreal Inj3 READ Inj3 WRITE setInj3 NOTIFY Inj3Changed)
    Q_PROPERTY(qreal Inj4 READ Inj4 WRITE setInj4 NOTIFY Inj4Changed)
    Q_PROPERTY(qreal Ign1 READ Ign1 WRITE setIgn1 NOTIFY Ign1Changed)
    Q_PROPERTY(qreal Ign2 READ Ign2 WRITE setIgn2 NOTIFY Ign2Changed)
    Q_PROPERTY(qreal Ign3 READ Ign3 WRITE setIgn3 NOTIFY Ign3Changed)
    Q_PROPERTY(qreal Ign4 READ Ign4 WRITE setIgn4 NOTIFY Ign4Changed)
    Q_PROPERTY(qreal TRIM READ TRIM WRITE setTRIM NOTIFY TRIMChanged)


public:
    DashBoard(QObject *parent = 0);
    // Advanced Info FD3S
    void setRevs(const qreal &revs);
    void setIntakepress(const qreal &Intakepress);
    void setPressureV(const qreal &PressureV);
    void setThrottleV(const qreal &ThrottleV);
    void setPrimaryinp(const qreal &Primaryinp);
    void setFuelc(const qreal &Fuelc);
    void setLeadingign(const qreal &Leadingign);
    void setTrailingign(const qreal &Trailingign);
    void setFueltemp(const qreal &Fueltemp);
    void setMoilp(const qreal &Moilp);
    void setBoosttp(const qreal &Boosttp);
    void setBoostwg(const qreal &Boostwg);
    void setWatertemp(const qreal &Watertemp);
    void setIntaketemp(const qreal &Intaketemp);
    void setKnock(const qreal &Knock);
    void setBatteryV(const qreal &BatteryV);
    void setSpeed(const qreal &speed);
    void setIscvduty (const qreal &Iscvduty );
    void setO2volt(const qreal &O2volt);
    void setna1(const qreal &na1);
    void setSecinjpulse(const qreal &Secinjpulse);
    void setna2(const qreal &na2);
    void setInjDuty(const qreal &InjDuty);



    //Sensor Info
    void setpim(const qreal &pim);
    void setvta1(const qreal &vta1);
    void setvta2(const qreal &vta2);
    void setvmop(const qreal &vmop);
    void setwtrt(const qreal &wtrt);
    void setairt(const qreal &airt);
    void setfuelt(const qreal &fuelt);
    void setO2S(const qreal &O2S);

    //Flags

    void setFlag1(const qreal &Flag1);
    void setFlag2(const qreal &Flag2);
    void setFlag3(const qreal &Flag3);
    void setFlag4(const qreal &Flag4);
    void setFlag5(const qreal &Flag5);
    void setFlag6(const qreal &Flag6);
    void setFlag7(const qreal &Flag7);
    void setFlag8(const qreal &Flag8);
    void setFlag9(const qreal &Flag9);
    void setFlag10(const qreal &Flag10);
    void setFlag11(const qreal &Flag11);
    void setFlag12(const qreal &Flag12);
    void setFlag13(const qreal &Flag13);
    void setFlag14(const qreal &Flag14);
    void setFlag15(const qreal &Flag15);
    void setFlag16(const qreal &Flag16);


    //Adaptronic extra

    void setMAP(const qreal &MAP);
    void setAUXT(const qreal &AUXT);
    void setAFR(const qreal &AFR);
    void setTPS(const qreal &TPS);
    void setIdleValue(const qreal &IdleValue);
    void setMVSS(const qreal &MVSS);
    void setSVSS(const qreal &SVSS);
    void setInj1(const qreal &Inj1);
    void setInj2(const qreal &Inj2);
    void setInj3(const qreal &Inj3);
    void setInj4(const qreal &Inj4);
    void setIgn1(const qreal &Ign1);
    void setIgn2(const qreal &Ign2);
    void setIgn3(const qreal &Ign3);
    void setIgn4(const qreal &Ign4);
    void setTRIM(const qreal &TRIM);

    // Advanced Info FD3S
    qreal revs() const;
    qreal Intakepress() const;
    qreal PressureV() const;
    qreal ThrottleV() const;
    qreal Primaryinp() const;
    qreal Fuelc() const;
    qreal Leadingign() const;
    qreal Trailingign() const;
    qreal Fueltemp() const;
    qreal Moilp() const;
    qreal Boosttp() const;
    qreal Boostwg() const;
    qreal Watertemp() const;
    qreal Intaketemp() const;
    qreal Knock() const;
    qreal speed() const;
    qreal BatteryV() const;
    qreal Iscvduty() const;
    qreal O2volt() const;
    qreal na1() const;
    qreal Secinjpulse() const;
    qreal na2() const;
    qreal InjDuty() const;

    //Sensor info

    qreal pim() const;
    qreal vta1() const;
    qreal vta2() const;
    qreal vmop() const;
    qreal wtrt() const;
    qreal airt() const;
    qreal fuelt() const;
    qreal O2S() const;

    //Flags

    qreal Flag1() const;
    qreal Flag2() const;
    qreal Flag3() const;
    qreal Flag4() const;
    qreal Flag5() const;
    qreal Flag6() const;
    qreal Flag7() const;
    qreal Flag8() const;
    qreal Flag9() const;
    qreal Flag10() const;
    qreal Flag11() const;
    qreal Flag12() const;
    qreal Flag13() const;
    qreal Flag14() const;
    qreal Flag15() const;
    qreal Flag16() const;



    //Adaptronic extra

    qreal MAP() const;
    qreal AUXT() const;
    qreal AFR() const;
    qreal TPS() const;
    qreal IdleValue() const;
    qreal MVSS() const;
    qreal SVSS() const;
    qreal Inj1() const;
    qreal Inj2() const;
    qreal Inj3() const;
    qreal Inj4() const;
    qreal Ign1() const;
    qreal Ign2() const;
    qreal Ign3() const;
    qreal Ign4() const;
    qreal TRIM() const;

signals:

    // Advanced Info FD3S
    void revsChanged(qreal revs);
    void IntakepressChanged(qreal Intakepress);
    void PressureVChanged(qreal PressureV);
    void ThrottleVChanged(qreal ThrottleV);
    void PrimaryinpChanged(qreal Primaryinp);
    void FuelcChanged(qreal Fuelc);
    void LeadingignChanged(qreal Leadingign);
    void TrailingignChanged(qreal Trailingign);
    void FueltempChanged(qreal Fueltemp);
    void MoilpChanged(qreal Moilp);
    void BoosttpChanged(qreal Boosttp);
    void BoostwgChanged(qreal Boostwg);
    void WatertempChanged(qreal Watertemp);
    void IntaketempChanged(qreal Intaketemp);
    void KnockChanged(qreal Knock);
    void speedChanged(qreal speed);
    void BatteryVChanged(qreal BatteryV);
    void IscvdutyChanged(qreal Iscvduty);
    void O2voltChanged(qreal O2volt);
    void na1Changed(qreal na1);
    void SecinjpulseChanged(qreal Secinjpulse);
    void na2Changed(qreal na2);
    void InjDutyChanged(qreal InjDuty);


    //Sensor info

    void pimChanged(qreal pim);
    void vta1Changed(qreal vta1);
    void vta2Changed(qreal vta2);
    void vmopChanged(qreal vmop);
    void wtrtChanged(qreal wtrt);
    void airtChanged(qreal airt);
    void fueltChanged(qreal fuelt);
    void O2SChanged(qreal O2S);

    //Flags

    void Flag1Changed(qreal Flag1);
    void Flag2Changed(qreal Flag2);
    void Flag3Changed(qreal Flag3);
    void Flag4Changed(qreal Flag4);
    void Flag5Changed(qreal Flag5);
    void Flag6Changed(qreal Flag6);
    void Flag7Changed(qreal Flag7);
    void Flag8Changed(qreal Flag8);
    void Flag9Changed(qreal Flag9);
    void Flag10Changed(qreal Flag10);
    void Flag11Changed(qreal Flag11);
    void Flag12Changed(qreal Flag12);
    void Flag13Changed(qreal Flag13);
    void Flag14Changed(qreal Flag14);
    void Flag15Changed(qreal Flag15);
    void Flag16Changed(qreal Flag16);


    //Adaptronic extra

    void MAPChanged(qreal MAP);
    void AUXTChanged(qreal AUXT);
    void AFRChanged(qreal AFR);
    void TPSChanged(qreal TPS);
    void IdleValueChanged(qreal IdleValue);
    void MVSSChanged(qreal MVSS);
    void SVSSChanged(qreal SVSS);
    void Inj1Changed(qreal Inj1);
    void Inj2Changed(qreal Inj2);
    void Inj3Changed(qreal Inj3);
    void Inj4Changed(qreal Inj4);
    void Ign1Changed(qreal Ign1);
    void Ign2Changed(qreal Ign2);
    void Ign3Changed(qreal Ign3);
    void Ign4Changed(qreal Ign4);
    void TRIMChanged(qreal TRIM);


private:
    // Advanced Info FD3S
    qreal m_revs;
    qreal m_Intakepress;
    qreal m_PressureV;
    qreal m_ThrottleV;
    qreal m_Primaryinp;
    qreal m_Fuelc;
    qreal m_Leadingign;
    qreal m_Trailingign;
    qreal m_Fueltemp;
    qreal m_Moilp;
    qreal m_Boosttp;
    qreal m_Boostwg;
    qreal m_Watertemp;
    qreal m_Intaketemp;
    qreal m_Knock;
    qreal m_speed;
    qreal m_BatteryV;
    qreal m_Iscvduty;
    qreal m_O2volt;
    qreal m_na1;
    qreal m_Secinjpulse;
    qreal m_na2;
    qreal m_InjDuty;

    //Sensor info

    qreal m_pim;
    qreal m_vta1;
    qreal m_vta2;
    qreal m_vmop;
    qreal m_wtrt;
    qreal m_airt;
    qreal m_fuelt;
    qreal m_O2S;

    //Flags

    qreal m_Flag1;
    qreal m_Flag2;
    qreal m_Flag3;
    qreal m_Flag4;
    qreal m_Flag5;
    qreal m_Flag6;
    qreal m_Flag7;
    qreal m_Flag8;
    qreal m_Flag9;
    qreal m_Flag10;
    qreal m_Flag11;
    qreal m_Flag12;
    qreal m_Flag13;
    qreal m_Flag14;
    qreal m_Flag15;
    qreal m_Flag16;


    //Adaptronic extra

    qreal m_MAP;
    qreal m_AUXT;
    qreal m_AFR;
    qreal m_TPS;
    qreal m_IdleValue;
    qreal m_MVSS;
    qreal m_SVSS;
    qreal m_Inj1;
    qreal m_Inj2;
    qreal m_Inj3;
    qreal m_Inj4;
    qreal m_Ign1;
    qreal m_Ign2;
    qreal m_Ign3;
    qreal m_Ign4;
    qreal m_TRIM;

};
