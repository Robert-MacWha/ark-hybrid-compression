// Lean compiler output
// Module: ArkR1CS.R1csStd.Eq
// Imports: public import Init public meta import Init public import ArkR1CS.R1csStd.Boolean
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg();
lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_not___redArg(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_is__neq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_is__neq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_is__neq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_is__neq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg___closed__0;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__not__equal___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__not__equal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__not__equal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_is__neq___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_b_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_not___redArg(v_inst_1_, v_b_2_);
v___x_5_ = lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(v___x_4_, v___y_3_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_is__neq___redArg___lam__0___boxed(lean_object* v_inst_6_, lean_object* v_b_7_, lean_object* v___y_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_ark_x2dr1cs_ArkR1CS_EqGadget_is__neq___redArg___lam__0(v_inst_6_, v_b_7_, v___y_8_);
lean_dec_ref(v___y_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_is__neq___redArg(lean_object* v_inst_10_, lean_object* v_inst_11_, lean_object* v_x_12_, lean_object* v_y_13_){
_start:
{
lean_object* v_is__eq_14_; lean_object* v___f_15_; lean_object* v___x_16_; lean_object* v___f_17_; 
v_is__eq_14_ = lean_ctor_get(v_inst_11_, 0);
lean_inc_ref(v_is__eq_14_);
lean_dec_ref(v_inst_11_);
v___f_15_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_EqGadget_is__neq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_15_, 0, v_inst_10_);
v___x_16_ = lean_apply_2(v_is__eq_14_, v_x_12_, v_y_13_);
v___f_17_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_17_, 0, v___x_16_);
lean_closure_set(v___f_17_, 1, v___f_15_);
return v___f_17_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_is__neq(lean_object* v_F_18_, lean_object* v_inst_19_, lean_object* v_T_20_, lean_object* v_inst_21_, lean_object* v_x_22_, lean_object* v_y_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lp_ark_x2dr1cs_ArkR1CS_EqGadget_is__neq___redArg(v_inst_19_, v_inst_21_, v_x_22_, v_y_23_);
return v___x_24_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg___closed__0(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg();
return v___x_25_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg(lean_object* v_inst_26_, lean_object* v_x_27_, lean_object* v_y_28_){
_start:
{
lean_object* v_conditional__enforce__equal_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v_conditional__enforce__equal_29_ = lean_ctor_get(v_inst_26_, 1);
lean_inc_ref(v_conditional__enforce__equal_29_);
lean_dec_ref(v_inst_26_);
v___x_30_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg___closed__0, &lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg___closed__0_once, _init_lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg___closed__0);
v___x_31_ = lean_apply_3(v_conditional__enforce__equal_29_, v_x_27_, v_y_28_, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal(lean_object* v_F_32_, lean_object* v_inst_33_, lean_object* v_T_34_, lean_object* v_inst_35_, lean_object* v_x_36_, lean_object* v_y_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg(v_inst_35_, v_x_36_, v_y_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___boxed(lean_object* v_F_39_, lean_object* v_inst_40_, lean_object* v_T_41_, lean_object* v_inst_42_, lean_object* v_x_43_, lean_object* v_y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal(v_F_39_, v_inst_40_, v_T_41_, v_inst_42_, v_x_43_, v_y_44_);
lean_dec_ref(v_inst_40_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__not__equal___redArg(lean_object* v_inst_46_, lean_object* v_x_47_, lean_object* v_y_48_){
_start:
{
lean_object* v_conditional__enforce__not__equal_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_conditional__enforce__not__equal_49_ = lean_ctor_get(v_inst_46_, 2);
lean_inc_ref(v_conditional__enforce__not__equal_49_);
lean_dec_ref(v_inst_46_);
v___x_50_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg___closed__0, &lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg___closed__0_once, _init_lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__equal___redArg___closed__0);
v___x_51_ = lean_apply_3(v_conditional__enforce__not__equal_49_, v_x_47_, v_y_48_, v___x_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__not__equal(lean_object* v_F_52_, lean_object* v_inst_53_, lean_object* v_T_54_, lean_object* v_inst_55_, lean_object* v_x_56_, lean_object* v_y_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__not__equal___redArg(v_inst_55_, v_x_56_, v_y_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__not__equal___boxed(lean_object* v_F_59_, lean_object* v_inst_60_, lean_object* v_T_61_, lean_object* v_inst_62_, lean_object* v_x_63_, lean_object* v_y_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = lp_ark_x2dr1cs_ArkR1CS_EqGadget_enforce__not__equal(v_F_59_, v_inst_60_, v_T_61_, v_inst_62_, v_x_63_, v_y_64_);
lean_dec_ref(v_inst_60_);
return v_res_65_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ark_x2dr1cs_ArkR1CS_R1csStd_Boolean(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ark_x2dr1cs_ArkR1CS_R1csStd_Eq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_ark_x2dr1cs_ArkR1CS_R1csStd_Boolean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
