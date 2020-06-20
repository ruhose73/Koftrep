#include "calc.h"
#include "ui_calc.h"

Calc::Calc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calc)
{
    ui->setupUi(this);
}

Calc::~Calc()
{
    delete ui;
}

void Calc::on_DC_total_but_clicked()
{
    QString qstr_DC_packaging = ui->DC_packaging_line->text();
    QString qstr_DC_delivery = ui->DC_delivery_line->text();
    QString qstr_DC_loading = ui->DC_loading_line->text();
    QString qstr_DC_feels = ui->DC_fees_line->text();
    QString qstr_DC_storageRoom = ui->DC_storageRoom_line->text();
    QString qstr_DC_advertising = ui->DC_advertising_line->text();
    QString qstr_DC_entertainment = ui->DC_entertainment_line->text();

    //если придется передавать в string вормате, то float оставим для
    //возможности считать локально

    fl_DC_packaging = qstr_DC_packaging.toFloat();
    fl_DC_delivery = qstr_DC_delivery.toFloat();
    fl_DC_loading = qstr_DC_loading.toFloat();
    fl_DC_feels = qstr_DC_feels.toFloat();
    fl_DC_storageRoom = qstr_DC_storageRoom.toFloat();
    fl_DC_advertising = qstr_DC_advertising.toFloat();
    fl_DC_entertainment = qstr_DC_entertainment.toFloat();

    fl_DC_total = (fl_DC_packaging+fl_DC_delivery+fl_DC_loading+fl_DC_feels+fl_DC_storageRoom+fl_DC_advertising+fl_DC_entertainment);

    ui->DC_total_line->setText(QString("%1").arg(fl_DC_total));
}

void Calc::on_NPC_total_but_clicked()
{
    QString qstr_NPC_plain = ui->NPC_plain_line->text();
    QString qstr_NPC_devProd = ui->NPC_defProd_line->text();
    QString qstr_NPC_damProp = ui->NPC_damProp_line->text();
    QString qstr_NPC_forfeits = ui->NPC_forfeits_line->text();
    QString qstr_NPC_lossMat = ui->NPC_lossMat_line->text();

    //если придется передавать в string вормате, то float оставим для
    //возможности считать локально

    fl_NPC_plain = qstr_NPC_plain.toFloat();
    fl_NPC_devProd = qstr_NPC_devProd.toFloat();
    fl_NPC_damProp = qstr_NPC_damProp.toFloat();
    fl_NPC_forfeits = qstr_NPC_forfeits.toFloat();
    fl_NPC_lossMat = qstr_NPC_lossMat.toFloat();

    fl_NPC_total = (fl_NPC_plain+fl_NPC_devProd+fl_NPC_damProp+fl_NPC_forfeits+fl_NPC_lossMat);

    ui->NPC_total_line->setText(QString("%1").arg(fl_NPC_total));
}

void Calc::on_WC_total_but_clicked()
{
    QString qstr_WC_deprecation = ui->WC_depreciation_line->text();
    QString qstr_WC_heating = ui->WC_heating_line->text();
    QString qstr_WC_deductionWage = ui->WC_deductionWage_line->text();
    QString qstr_WC_deductionSalary = ui->WC_deductionSalary_line->text();

    //если придется передавать в string вормате, то float оставим для
    //возможности считать локально

    fl_WC_deprecation = qstr_WC_deprecation.toFloat();
    fl_WC_heating = qstr_WC_heating.toFloat();
    fl_WC_deductionWage = qstr_WC_deductionWage.toFloat();
    fl_WC_deductionSalary = qstr_WC_deductionSalary.toFloat();

    fl_WC_total = (fl_WC_deprecation + fl_WC_heating + fl_WC_deductionWage + fl_WC_deductionSalary);

    ui->WC_total_line->setText(QString("%1").arg(fl_WC_total));
}

void Calc::on_PE_total_but_clicked()
{
    QString qstr_PE_sfProducts = ui->PE_sfProducts_line->text();
    QString qstr_PE_primProd = ui->PE_primProd_line->text();
    QString qstr_PE_auxiliaryProd = ui->PE_auxiliaryProd_line->text();
    QString qstr_PE_overheadCosts = ui->PE_overheadCosts_line->text();
    QString qstr_PE_marriage = ui->PE_marriage_line->text();
    QString qstr_PE_prodService = ui->PE_prodService_line->text();

    //если придется передавать в string вормате, то float оставим для
    //возможности считать локально

    fl_PE_sfProducts = qstr_PE_sfProducts.toFloat();
    fl_PE_primProd = qstr_PE_primProd.toFloat();
    fl_PE_auxiliaryProd = qstr_PE_auxiliaryProd.toFloat();
    fl_PE_overheadCosts = qstr_PE_overheadCosts.toFloat();
    fl_PE_marriage = qstr_PE_marriage.toFloat();
    fl_PE_prodService = qstr_PE_prodService.toFloat();

    fl_PE_total = (fl_PE_sfProducts + fl_PE_primProd + fl_PE_auxiliaryProd + fl_PE_overheadCosts + fl_PE_marriage + fl_PE_prodService);

    ui->PE_total_line->setText(QString("%1").arg(fl_PE_total));
}


void Calc::on_AEW_total_but_clicked()
{
    QString qstr_AEW_additIncome = ui->AEW_additIncome_line->text();
    QString qstr_AEW_addEarning = ui->AEW_addEarning_line->text();

    //если придется передавать в string вормате, то float оставим для
    //возможности считать локально

    fl_AEW_additIncome = qstr_AEW_additIncome.toFloat();
    fl_AEW_addEarning = qstr_AEW_addEarning.toFloat();

    fl_AEW_total = (fl_AEW_additIncome+fl_AEW_addEarning);

    ui->AEW_total_line->setText(QString("%1").arg(fl_AEW_total));
}

void Calc::on_PER_total_but_clicked()
{
    QString qstr_PER_heating = ui->PER_heating_line->text();
    QString qstr_PER_water = ui->PER_water_line->text();
    QString qstr_PER_electricity = ui->PER_electricity_line->text();

    //если придется передавать в string вормате, то float оставим для
    //возможности считать локально

    fl_PER_heating = qstr_PER_heating.toFloat();
    fl_PER_water = qstr_PER_water.toFloat();
    fl_PER_electricity = qstr_PER_electricity.toFloat();

    fl_PER_total = (fl_PER_heating + fl_PER_water + fl_PER_electricity);

    ui->PER_total_line->setText(QString("%1").arg(fl_PER_total));


}

void Calc::on_DTB_total_but_clicked()
{
    QString qstr_DTB_insurance = ui->DTB_insurance_line->text();
    QString qstr_DTB_depreciation = ui->DTB_depreciation_line->text();

    //если придется передавать в string вормате, то float оставим для
    //возможности считать локально

    fl_DTB_insurance = qstr_DTB_insurance.toFloat();
    fl_DTB_depreciation = qstr_DTB_depreciation.toFloat();

    fl_DTB_total = (fl_DTB_insurance+fl_DTB_depreciation);

    ui->DTB_total_line->setText(QString("%1").arg(fl_DTB_total));
}



void Calc::on_MAT_total_but_clicked()
{
    QString qstr_MAT_mainMat = ui->MAT_mainMat_line->text();
    QString qstr_MAT_costSf = ui->MAT_costSf_line->text();
    QString qstr_MAT_relatedMat = ui->MAT_relatedMat_line->text();

    //если придется передавать в string вормате, то float оставим для
    //возможности считать локально

    fl_MAT_mainMat = qstr_MAT_mainMat.toFloat();
    fl_MAT_costSf = qstr_MAT_costSf.toFloat();
    fl_MAT_relatedMat = qstr_MAT_relatedMat.toFloat();

    fl_MAT_total = (fl_MAT_mainMat+fl_MAT_costSf+fl_MAT_relatedMat);

    ui->MAT_total_line->setText(QString("%1").arg(fl_MAT_total));
}
