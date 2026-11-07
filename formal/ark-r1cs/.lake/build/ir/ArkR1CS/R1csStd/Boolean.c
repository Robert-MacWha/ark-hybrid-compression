// Lean compiler output
// Module: ArkR1CS.R1csStd.Boolean
// Imports: public import Init public meta import Init public import ArkR1CS.Relations.ConstraintSystem
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
lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar___redArg(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(lean_object*, lean_object*);
lean_object* lp_mathlib_Field_toSemifield___redArg(lean_object*);
lean_object* lp_mathlib_instMulZeroClassOfSemiring___redArg(lean_object*);
lean_object* lp_mathlib_Field_toDivisionRing___redArg(lean_object*);
lean_object* lp_mathlib_Ring_toAddGroupWithOne___redArg(lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_new__witness__variable___redArg___lam__0(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_Constant_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_Constant_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_Var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_Var_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg();
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg___boxed(lean_object*);
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___closed__0;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE(lean_object*);
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___redArg();
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___redArg___boxed(lean_object*);
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___closed__0;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE(lean_object*);
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_Boolean_value___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_value___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_Boolean_value(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_value___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_lc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_eval___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_eval___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_eval(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_eval___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Boolean_0__ArkR1CS_Boolean_lc_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Boolean_0__ArkR1CS_Boolean_lc_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_not___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_not(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_not___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_not(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorIdx___redArg(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorIdx___redArg___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorIdx___redArg(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorIdx(lean_object* v_F_6_, lean_object* v_x_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorIdx___redArg(v_x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorIdx___boxed(lean_object* v_F_9_, lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorIdx(v_F_9_, v_x_10_);
lean_dec_ref(v_x_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim___redArg(lean_object* v_t_12_, lean_object* v_k_13_){
_start:
{
if (lean_obj_tag(v_t_12_) == 0)
{
uint8_t v_b_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v_b_14_ = lean_ctor_get_uint8(v_t_12_, 0);
lean_dec_ref_known(v_t_12_, 0);
v___x_15_ = lean_box(v_b_14_);
v___x_16_ = lean_apply_1(v_k_13_, v___x_15_);
return v___x_16_;
}
else
{
lean_object* v_v_17_; lean_object* v___x_18_; 
v_v_17_ = lean_ctor_get(v_t_12_, 0);
lean_inc_ref(v_v_17_);
lean_dec_ref_known(v_t_12_, 1);
v___x_18_ = lean_apply_1(v_k_13_, v_v_17_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim(lean_object* v_F_19_, lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim___redArg(v_t_22_, v_k_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim___boxed(lean_object* v_F_26_, lean_object* v_motive_27_, lean_object* v_ctorIdx_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim(v_F_26_, v_motive_27_, v_ctorIdx_28_, v_t_29_, v_h_30_, v_k_31_);
lean_dec(v_ctorIdx_28_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_Constant_elim___redArg(lean_object* v_t_33_, lean_object* v_Constant_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim___redArg(v_t_33_, v_Constant_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_Constant_elim(lean_object* v_F_36_, lean_object* v_motive_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_Constant_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim___redArg(v_t_38_, v_Constant_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_Var_elim___redArg(lean_object* v_t_42_, lean_object* v_Var_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim___redArg(v_t_42_, v_Var_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_Var_elim(lean_object* v_F_45_, lean_object* v_motive_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_Var_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_ctorElim___redArg(v_t_47_, v_Var_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg(){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg___closed__0));
return v___x_54_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg___boxed(lean_object* v___dummy_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg();
return v_res_56_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___closed__0(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg();
return v___x_57_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE(lean_object* v_F_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___closed__0, &lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___closed__0_once, _init_lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___closed__0);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___redArg(){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___redArg___closed__0));
return v___x_63_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___redArg___boxed(lean_object* v___dummy_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___redArg();
return v_res_65_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___closed__0(void){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___redArg();
return v___x_66_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE(lean_object* v_F_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___closed__0, &lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___closed__0_once, _init_lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___closed__0);
return v___x_68_;
}
}
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_Boolean_value___redArg(lean_object* v_x_69_){
_start:
{
if (lean_obj_tag(v_x_69_) == 0)
{
uint8_t v_b_70_; 
v_b_70_ = lean_ctor_get_uint8(v_x_69_, 0);
return v_b_70_;
}
else
{
lean_object* v_v_71_; uint8_t v_value_72_; 
v_v_71_ = lean_ctor_get(v_x_69_, 0);
v_value_72_ = lean_ctor_get_uint8(v_v_71_, sizeof(void*)*1);
return v_value_72_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_value___redArg___boxed(lean_object* v_x_73_){
_start:
{
uint8_t v_res_74_; lean_object* v_r_75_; 
v_res_74_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_value___redArg(v_x_73_);
lean_dec_ref(v_x_73_);
v_r_75_ = lean_box(v_res_74_);
return v_r_75_;
}
}
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_Boolean_value(lean_object* v_F_76_, lean_object* v_x_77_){
_start:
{
uint8_t v___x_78_; 
v___x_78_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_value___redArg(v_x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_value___boxed(lean_object* v_F_79_, lean_object* v_x_80_){
_start:
{
uint8_t v_res_81_; lean_object* v_r_82_; 
v_res_81_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_value(v_F_79_, v_x_80_);
lean_dec_ref(v_x_80_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg(lean_object* v_inst_83_, lean_object* v_x_84_){
_start:
{
if (lean_obj_tag(v_x_84_) == 0)
{
uint8_t v_b_85_; 
v_b_85_ = lean_ctor_get_uint8(v_x_84_, 0);
if (v_b_85_ == 0)
{
lean_object* v___x_86_; 
lean_dec_ref(v_inst_83_);
v___x_86_ = lean_box(0);
return v___x_86_;
}
else
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_box(1);
v___x_88_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar___redArg(v_inst_83_, v___x_87_);
return v___x_88_;
}
}
else
{
lean_object* v_v_89_; lean_object* v_lc_90_; 
lean_dec_ref(v_inst_83_);
v_v_89_ = lean_ctor_get(v_x_84_, 0);
v_lc_90_ = lean_ctor_get(v_v_89_, 0);
lean_inc(v_lc_90_);
return v_lc_90_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg___boxed(lean_object* v_inst_91_, lean_object* v_x_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg(v_inst_91_, v_x_92_);
lean_dec_ref(v_x_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_lc(lean_object* v_F_94_, lean_object* v_inst_95_, lean_object* v_x_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg(v_inst_95_, v_x_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___boxed(lean_object* v_F_98_, lean_object* v_inst_99_, lean_object* v_x_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_lc(v_F_98_, v_inst_99_, v_x_100_);
lean_dec_ref(v_x_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_eval___redArg(lean_object* v_inst_102_, lean_object* v_a_103_, lean_object* v_b_104_){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
lean_inc_ref(v_inst_102_);
v___x_105_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg(v_inst_102_, v_b_104_);
v___x_106_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg(v_inst_102_, v_a_103_, v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_eval___redArg___boxed(lean_object* v_inst_107_, lean_object* v_a_108_, lean_object* v_b_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_eval___redArg(v_inst_107_, v_a_108_, v_b_109_);
lean_dec_ref(v_b_109_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_eval(lean_object* v_F_111_, lean_object* v_inst_112_, lean_object* v_a_113_, lean_object* v_b_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_eval___redArg(v_inst_112_, v_a_113_, v_b_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_eval___boxed(lean_object* v_F_116_, lean_object* v_inst_117_, lean_object* v_a_118_, lean_object* v_b_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_eval(v_F_116_, v_inst_117_, v_a_118_, v_b_119_);
lean_dec_ref(v_b_119_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Boolean_0__ArkR1CS_Boolean_lc_match__1_splitter___redArg(lean_object* v_x_121_, lean_object* v_h__1_122_, lean_object* v_h__2_123_, lean_object* v_h__3_124_){
_start:
{
if (lean_obj_tag(v_x_121_) == 0)
{
uint8_t v_b_125_; 
lean_dec(v_h__3_124_);
v_b_125_ = lean_ctor_get_uint8(v_x_121_, 0);
lean_dec_ref_known(v_x_121_, 0);
if (v_b_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; 
lean_dec(v_h__2_123_);
v___x_126_ = lean_box(0);
v___x_127_ = lean_apply_1(v_h__1_122_, v___x_126_);
return v___x_127_;
}
else
{
lean_object* v___x_128_; lean_object* v___x_129_; 
lean_dec(v_h__1_122_);
v___x_128_ = lean_box(0);
v___x_129_ = lean_apply_1(v_h__2_123_, v___x_128_);
return v___x_129_;
}
}
else
{
lean_object* v_v_130_; lean_object* v___x_131_; 
lean_dec(v_h__2_123_);
lean_dec(v_h__1_122_);
v_v_130_ = lean_ctor_get(v_x_121_, 0);
lean_inc_ref(v_v_130_);
lean_dec_ref_known(v_x_121_, 1);
v___x_131_ = lean_apply_1(v_h__3_124_, v_v_130_);
return v___x_131_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Boolean_0__ArkR1CS_Boolean_lc_match__1_splitter(lean_object* v_F_132_, lean_object* v_motive_133_, lean_object* v_x_134_, lean_object* v_h__1_135_, lean_object* v_h__2_136_, lean_object* v_h__3_137_){
_start:
{
if (lean_obj_tag(v_x_134_) == 0)
{
uint8_t v_b_138_; 
lean_dec(v_h__3_137_);
v_b_138_ = lean_ctor_get_uint8(v_x_134_, 0);
lean_dec_ref_known(v_x_134_, 0);
if (v_b_138_ == 0)
{
lean_object* v___x_139_; lean_object* v___x_140_; 
lean_dec(v_h__2_136_);
v___x_139_ = lean_box(0);
v___x_140_ = lean_apply_1(v_h__1_135_, v___x_139_);
return v___x_140_;
}
else
{
lean_object* v___x_141_; lean_object* v___x_142_; 
lean_dec(v_h__1_135_);
v___x_141_ = lean_box(0);
v___x_142_ = lean_apply_1(v_h__2_136_, v___x_141_);
return v___x_142_;
}
}
else
{
lean_object* v_v_143_; lean_object* v___x_144_; 
lean_dec(v_h__2_136_);
lean_dec(v_h__1_135_);
v_v_143_ = lean_ctor_get(v_x_134_, 0);
lean_inc_ref(v_v_143_);
lean_dec_ref_known(v_x_134_, 1);
v___x_144_ = lean_apply_1(v_h__3_137_, v_v_143_);
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_not___redArg(lean_object* v_inst_145_, lean_object* v_v_146_){
_start:
{
uint8_t v_value_147_; lean_object* v_lc_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_162_; 
v_value_147_ = lean_ctor_get_uint8(v_v_146_, sizeof(void*)*1);
v_lc_148_ = lean_ctor_get(v_v_146_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v_v_146_);
if (v_isSharedCheck_162_ == 0)
{
v___x_150_ = v_v_146_;
v_isShared_151_ = v_isSharedCheck_162_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_lc_148_);
lean_dec(v_v_146_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_162_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
uint8_t v___y_153_; 
if (v_value_147_ == 0)
{
uint8_t v___x_160_; 
v___x_160_ = 1;
v___y_153_ = v___x_160_;
goto v___jp_152_;
}
else
{
uint8_t v___x_161_; 
v___x_161_ = 0;
v___y_153_ = v___x_161_;
goto v___jp_152_;
}
v___jp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_154_ = lean_box(1);
lean_inc_ref(v_inst_145_);
v___x_155_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar___redArg(v_inst_145_, v___x_154_);
v___x_156_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff___redArg(v_inst_145_, v___x_155_, v_lc_148_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 0, v___x_156_);
v___x_158_ = v___x_150_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_ctor_set_uint8(v___x_158_, sizeof(void*)*1, v___y_153_);
return v___x_158_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_not(lean_object* v_F_163_, lean_object* v_inst_164_, lean_object* v_v_165_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_not___redArg(v_inst_164_, v_v_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg___lam__0(lean_object* v_inst_167_, uint8_t v_b_168_, lean_object* v_v_169_, lean_object* v___y_170_){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_171_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar___redArg(v_inst_167_, v_v_169_);
v___x_172_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set_uint8(v___x_172_, sizeof(void*)*1, v_b_168_);
v___x_173_ = lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(v___x_172_, v___y_170_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg___lam__0___boxed(lean_object* v_inst_174_, lean_object* v_b_175_, lean_object* v_v_176_, lean_object* v___y_177_){
_start:
{
uint8_t v_b_boxed_178_; lean_object* v_res_179_; 
v_b_boxed_178_ = lean_unbox(v_b_175_);
v_res_179_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg___lam__0(v_inst_174_, v_b_boxed_178_, v_v_176_, v___y_177_);
lean_dec_ref(v___y_177_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg(lean_object* v_inst_180_, uint8_t v_b_181_){
_start:
{
lean_object* v___x_182_; lean_object* v_toCommSemiring_183_; lean_object* v___x_184_; lean_object* v_toZero_185_; lean_object* v___x_186_; lean_object* v_toRing_187_; lean_object* v___x_188_; lean_object* v_toAddMonoidWithOne_189_; lean_object* v_toOne_190_; lean_object* v___x_191_; lean_object* v___f_192_; lean_object* v___y_194_; 
v___x_182_ = lp_mathlib_Field_toSemifield___redArg(v_inst_180_);
v_toCommSemiring_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc_ref(v_toCommSemiring_183_);
lean_dec_ref(v___x_182_);
v___x_184_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toCommSemiring_183_);
v_toZero_185_ = lean_ctor_get(v___x_184_, 1);
lean_inc(v_toZero_185_);
lean_dec_ref(v___x_184_);
lean_inc_ref(v_inst_180_);
v___x_186_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_180_);
v_toRing_187_ = lean_ctor_get(v___x_186_, 0);
lean_inc_ref(v_toRing_187_);
lean_dec_ref(v___x_186_);
v___x_188_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_187_);
v_toAddMonoidWithOne_189_ = lean_ctor_get(v___x_188_, 1);
lean_inc_ref(v_toAddMonoidWithOne_189_);
lean_dec_ref(v___x_188_);
v_toOne_190_ = lean_ctor_get(v_toAddMonoidWithOne_189_, 2);
lean_inc(v_toOne_190_);
lean_dec_ref(v_toAddMonoidWithOne_189_);
v___x_191_ = lean_box(v_b_181_);
v___f_192_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_192_, 0, v_inst_180_);
lean_closure_set(v___f_192_, 1, v___x_191_);
if (v_b_181_ == 0)
{
lean_dec(v_toOne_190_);
v___y_194_ = v_toZero_185_;
goto v___jp_193_;
}
else
{
lean_dec(v_toZero_185_);
v___y_194_ = v_toOne_190_;
goto v___jp_193_;
}
v___jp_193_:
{
lean_object* v___f_195_; lean_object* v___f_196_; 
v___f_195_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_new__witness__variable___redArg___lam__0), 2, 1);
lean_closure_set(v___f_195_, 0, v___y_194_);
v___f_196_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_196_, 0, v___f_195_);
lean_closure_set(v___f_196_, 1, v___f_192_);
return v___f_196_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg___boxed(lean_object* v_inst_197_, lean_object* v_b_198_){
_start:
{
uint8_t v_b_boxed_199_; lean_object* v_res_200_; 
v_b_boxed_199_ = lean_unbox(v_b_198_);
v_res_200_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg(v_inst_197_, v_b_boxed_199_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check(lean_object* v_F_201_, lean_object* v_inst_202_, uint8_t v_b_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg(v_inst_202_, v_b_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___boxed(lean_object* v_F_205_, lean_object* v_inst_206_, lean_object* v_b_207_){
_start:
{
uint8_t v_b_boxed_208_; lean_object* v_res_209_; 
v_b_boxed_208_ = lean_unbox(v_b_207_);
v_res_209_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check(v_F_205_, v_inst_206_, v_b_boxed_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_not___redArg(lean_object* v_inst_210_, lean_object* v_x_211_){
_start:
{
if (lean_obj_tag(v_x_211_) == 0)
{
uint8_t v_b_212_; 
lean_dec_ref(v_inst_210_);
v_b_212_ = lean_ctor_get_uint8(v_x_211_, 0);
lean_dec_ref_known(v_x_211_, 0);
if (v_b_212_ == 0)
{
lean_object* v___x_213_; 
v___x_213_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_Boolean_TRUE___redArg___closed__0));
return v___x_213_;
}
else
{
lean_object* v___x_214_; 
v___x_214_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_Boolean_FALSE___redArg___closed__0));
return v___x_214_;
}
}
else
{
lean_object* v_v_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_223_; 
v_v_215_ = lean_ctor_get(v_x_211_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v_x_211_);
if (v_isSharedCheck_223_ == 0)
{
v___x_217_ = v_x_211_;
v_isShared_218_ = v_isSharedCheck_223_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_v_215_);
lean_dec(v_x_211_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_223_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_219_; lean_object* v___x_221_; 
v___x_219_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_not___redArg(v_inst_210_, v_v_215_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 0, v___x_219_);
v___x_221_ = v___x_217_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_not(lean_object* v_F_224_, lean_object* v_inst_225_, lean_object* v_x_226_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_not___redArg(v_inst_225_, v_x_226_);
return v___x_227_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ark_x2dr1cs_ArkR1CS_Relations_ConstraintSystem(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ark_x2dr1cs_ArkR1CS_R1csStd_Boolean(uint8_t builtin) {
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
res = initialize_ark_x2dr1cs_ArkR1CS_Relations_ConstraintSystem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
