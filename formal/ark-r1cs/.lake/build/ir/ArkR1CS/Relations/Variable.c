// Lean compiler output
// Module: ArkR1CS.Relations.Variable
// Imports: public import Init public meta import Init public import Mathlib.Algebra.Field.Defs public import Mathlib.Algebra.BigOperators.Group.List.Basic public import Mathlib.Tactic.Ring
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
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Field_toSemifield___redArg(lean_object*);
lean_object* lp_mathlib_instMulZeroClassOfSemiring___redArg(lean_object*);
lean_object* lp_mathlib_Field_toDivisionRing___redArg(lean_object*);
lean_object* lp_mathlib_Ring_toAddGroupWithOne___redArg(lean_object*);
lean_object* lp_mathlib_instDistribOfSemiring___redArg(lean_object*);
lean_object* lp_mathlib_Ring_toAddCommGroup___redArg(lean_object*);
lean_object* lp_mathlib_SubNegZeroMonoid_toNegZeroClass___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_sum___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Zero_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Zero_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_One_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_One_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Instance_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Instance_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Witness_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Witness_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_instDecidableEqVariable_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instDecidableEqVariable_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_instDecidableEqVariable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instDecidableEqVariable___boxed(lean_object*, lean_object*);
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ArkR1CS.Variable.Zero"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__0_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__0_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__1 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__1_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "ArkR1CS.Variable.One"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__2 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__2_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__2_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__3 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__3_value;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "ArkR1CS.Variable.Instance"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__6 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__6_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__6_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__7 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__7_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__8 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__8_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "ArkR1CS.Variable.Witness"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__9 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__9_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__9_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__10 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__10_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__11 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__11_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_instReprVariable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable___closed__0_value;
LEAN_EXPORT const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprVariable___closed__0_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_eval___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_eval(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_zero___redArg();
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_zero___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_zero(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofTerm___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofTerm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
default: 
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_ctorIdx___boxed(lean_object* v_x_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = lp_ark_x2dr1cs_ArkR1CS_Variable_ctorIdx(v_x_6_);
lean_dec(v_x_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___redArg(lean_object* v_t_8_, lean_object* v_k_9_){
_start:
{
switch(lean_obj_tag(v_t_8_))
{
case 2:
{
lean_object* v_i_10_; lean_object* v___x_11_; 
v_i_10_ = lean_ctor_get(v_t_8_, 0);
lean_inc(v_i_10_);
lean_dec_ref_known(v_t_8_, 1);
v___x_11_ = lean_apply_1(v_k_9_, v_i_10_);
return v___x_11_;
}
case 3:
{
lean_object* v_i_12_; lean_object* v___x_13_; 
v_i_12_ = lean_ctor_get(v_t_8_, 0);
lean_inc(v_i_12_);
lean_dec_ref_known(v_t_8_, 1);
v___x_13_ = lean_apply_1(v_k_9_, v_i_12_);
return v___x_13_;
}
default: 
{
lean_dec(v_t_8_);
return v_k_9_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim(lean_object* v_motive_14_, lean_object* v_ctorIdx_15_, lean_object* v_t_16_, lean_object* v_h_17_, lean_object* v_k_18_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___redArg(v_t_16_, v_k_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___boxed(lean_object* v_motive_20_, lean_object* v_ctorIdx_21_, lean_object* v_t_22_, lean_object* v_h_23_, lean_object* v_k_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim(v_motive_20_, v_ctorIdx_21_, v_t_22_, v_h_23_, v_k_24_);
lean_dec(v_ctorIdx_21_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Zero_elim___redArg(lean_object* v_t_26_, lean_object* v_Zero_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___redArg(v_t_26_, v_Zero_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Zero_elim(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_Zero_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___redArg(v_t_30_, v_Zero_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_One_elim___redArg(lean_object* v_t_34_, lean_object* v_One_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___redArg(v_t_34_, v_One_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_One_elim(lean_object* v_motive_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_One_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___redArg(v_t_38_, v_One_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Instance_elim___redArg(lean_object* v_t_42_, lean_object* v_Instance_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___redArg(v_t_42_, v_Instance_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Instance_elim(lean_object* v_motive_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_Instance_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___redArg(v_t_46_, v_Instance_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Witness_elim___redArg(lean_object* v_t_50_, lean_object* v_Witness_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___redArg(v_t_50_, v_Witness_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_Witness_elim(lean_object* v_motive_53_, lean_object* v_t_54_, lean_object* v_h_55_, lean_object* v_Witness_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lp_ark_x2dr1cs_ArkR1CS_Variable_ctorElim___redArg(v_t_54_, v_Witness_56_);
return v___x_57_;
}
}
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_instDecidableEqVariable_decEq(lean_object* v_x_58_, lean_object* v_x_59_){
_start:
{
switch(lean_obj_tag(v_x_58_))
{
case 0:
{
if (lean_obj_tag(v_x_59_) == 0)
{
uint8_t v___x_60_; 
v___x_60_ = 1;
return v___x_60_;
}
else
{
uint8_t v___x_61_; 
v___x_61_ = 0;
return v___x_61_;
}
}
case 1:
{
if (lean_obj_tag(v_x_59_) == 1)
{
uint8_t v___x_62_; 
v___x_62_ = 1;
return v___x_62_;
}
else
{
uint8_t v___x_63_; 
v___x_63_ = 0;
return v___x_63_;
}
}
case 2:
{
if (lean_obj_tag(v_x_59_) == 2)
{
lean_object* v_i_64_; lean_object* v_i_65_; uint8_t v___x_66_; 
v_i_64_ = lean_ctor_get(v_x_58_, 0);
v_i_65_ = lean_ctor_get(v_x_59_, 0);
v___x_66_ = lean_nat_dec_eq(v_i_64_, v_i_65_);
return v___x_66_;
}
else
{
uint8_t v___x_67_; 
v___x_67_ = 0;
return v___x_67_;
}
}
default: 
{
if (lean_obj_tag(v_x_59_) == 3)
{
lean_object* v_i_68_; lean_object* v_i_69_; uint8_t v___x_70_; 
v_i_68_ = lean_ctor_get(v_x_58_, 0);
v_i_69_ = lean_ctor_get(v_x_59_, 0);
v___x_70_ = lean_nat_dec_eq(v_i_68_, v_i_69_);
return v___x_70_;
}
else
{
uint8_t v___x_71_; 
v___x_71_ = 0;
return v___x_71_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instDecidableEqVariable_decEq___boxed(lean_object* v_x_72_, lean_object* v_x_73_){
_start:
{
uint8_t v_res_74_; lean_object* v_r_75_; 
v_res_74_ = lp_ark_x2dr1cs_ArkR1CS_instDecidableEqVariable_decEq(v_x_72_, v_x_73_);
lean_dec(v_x_73_);
lean_dec(v_x_72_);
v_r_75_ = lean_box(v_res_74_);
return v_r_75_;
}
}
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_instDecidableEqVariable(lean_object* v_x_76_, lean_object* v_x_77_){
_start:
{
uint8_t v___x_78_; 
v___x_78_ = lp_ark_x2dr1cs_ArkR1CS_instDecidableEqVariable_decEq(v_x_76_, v_x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instDecidableEqVariable___boxed(lean_object* v_x_79_, lean_object* v_x_80_){
_start:
{
uint8_t v_res_81_; lean_object* v_r_82_; 
v_res_81_ = lp_ark_x2dr1cs_ArkR1CS_instDecidableEqVariable(v_x_79_, v_x_80_);
lean_dec(v_x_80_);
lean_dec(v_x_79_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_unsigned_to_nat(2u);
v___x_90_ = lean_nat_to_int(v___x_89_);
return v___x_90_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_unsigned_to_nat(1u);
v___x_92_ = lean_nat_to_int(v___x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr(lean_object* v_x_105_, lean_object* v_prec_106_){
_start:
{
lean_object* v___y_108_; lean_object* v___y_115_; 
switch(lean_obj_tag(v_x_105_))
{
case 0:
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1024u);
v___x_122_ = lean_nat_dec_le(v___x_121_, v_prec_106_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
v___x_123_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4, &lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4);
v___y_108_ = v___x_123_;
goto v___jp_107_;
}
else
{
lean_object* v___x_124_; 
v___x_124_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5, &lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5);
v___y_108_ = v___x_124_;
goto v___jp_107_;
}
}
case 1:
{
lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(1024u);
v___x_126_ = lean_nat_dec_le(v___x_125_, v_prec_106_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; 
v___x_127_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4, &lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4);
v___y_115_ = v___x_127_;
goto v___jp_114_;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5, &lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5);
v___y_115_ = v___x_128_;
goto v___jp_114_;
}
}
case 2:
{
lean_object* v_i_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_149_; 
v_i_129_ = lean_ctor_get(v_x_105_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v_x_105_);
if (v_isSharedCheck_149_ == 0)
{
v___x_131_ = v_x_105_;
v_isShared_132_ = v_isSharedCheck_149_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_i_129_);
lean_dec(v_x_105_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_149_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___y_134_; lean_object* v___x_145_; uint8_t v___x_146_; 
v___x_145_ = lean_unsigned_to_nat(1024u);
v___x_146_ = lean_nat_dec_le(v___x_145_, v_prec_106_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; 
v___x_147_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4, &lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4);
v___y_134_ = v___x_147_;
goto v___jp_133_;
}
else
{
lean_object* v___x_148_; 
v___x_148_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5, &lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5);
v___y_134_ = v___x_148_;
goto v___jp_133_;
}
v___jp_133_:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_135_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__8));
v___x_136_ = l_Nat_reprFast(v_i_129_);
if (v_isShared_132_ == 0)
{
lean_ctor_set_tag(v___x_131_, 3);
lean_ctor_set(v___x_131_, 0, v___x_136_);
v___x_138_ = v___x_131_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_136_);
v___x_138_ = v_reuseFailAlloc_144_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_139_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_139_, 0, v___x_135_);
lean_ctor_set(v___x_139_, 1, v___x_138_);
lean_inc(v___y_134_);
v___x_140_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_140_, 0, v___y_134_);
lean_ctor_set(v___x_140_, 1, v___x_139_);
v___x_141_ = 0;
v___x_142_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_142_, 0, v___x_140_);
lean_ctor_set_uint8(v___x_142_, sizeof(void*)*1, v___x_141_);
v___x_143_ = l_Repr_addAppParen(v___x_142_, v_prec_106_);
return v___x_143_;
}
}
}
}
default: 
{
lean_object* v_i_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_170_; 
v_i_150_ = lean_ctor_get(v_x_105_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v_x_105_);
if (v_isSharedCheck_170_ == 0)
{
v___x_152_ = v_x_105_;
v_isShared_153_ = v_isSharedCheck_170_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_i_150_);
lean_dec(v_x_105_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_170_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___y_155_; lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_166_ = lean_unsigned_to_nat(1024u);
v___x_167_ = lean_nat_dec_le(v___x_166_, v_prec_106_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; 
v___x_168_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4, &lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__4);
v___y_155_ = v___x_168_;
goto v___jp_154_;
}
else
{
lean_object* v___x_169_; 
v___x_169_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5, &lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__5);
v___y_155_ = v___x_169_;
goto v___jp_154_;
}
v___jp_154_:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_159_; 
v___x_156_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__11));
v___x_157_ = l_Nat_reprFast(v_i_150_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_157_);
v___x_159_ = v___x_152_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_157_);
v___x_159_ = v_reuseFailAlloc_165_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_160_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_156_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
lean_inc(v___y_155_);
v___x_161_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_161_, 0, v___y_155_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
v___x_162_ = 0;
v___x_163_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_163_, 0, v___x_161_);
lean_ctor_set_uint8(v___x_163_, sizeof(void*)*1, v___x_162_);
v___x_164_ = l_Repr_addAppParen(v___x_163_, v_prec_106_);
return v___x_164_;
}
}
}
}
}
v___jp_107_:
{
lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_109_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__1));
lean_inc(v___y_108_);
v___x_110_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_110_, 0, v___y_108_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = 0;
v___x_112_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_112_, 0, v___x_110_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*1, v___x_111_);
v___x_113_ = l_Repr_addAppParen(v___x_112_, v_prec_106_);
return v___x_113_;
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_116_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___closed__3));
lean_inc(v___y_115_);
v___x_117_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_117_, 0, v___y_115_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = 0;
v___x_119_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_119_, 0, v___x_117_);
lean_ctor_set_uint8(v___x_119_, sizeof(void*)*1, v___x_118_);
v___x_120_ = l_Repr_addAppParen(v___x_119_, v_prec_106_);
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___boxed(lean_object* v_x_171_, lean_object* v_prec_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr(v_x_171_, v_prec_172_);
lean_dec(v_prec_172_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_eval___redArg(lean_object* v_inst_176_, lean_object* v_a_177_, lean_object* v_x_178_){
_start:
{
lean_object* v___x_179_; lean_object* v_toCommSemiring_180_; lean_object* v___x_181_; lean_object* v_toZero_182_; lean_object* v___x_183_; lean_object* v_toRing_184_; lean_object* v___x_185_; lean_object* v_toAddMonoidWithOne_186_; 
v___x_179_ = lp_mathlib_Field_toSemifield___redArg(v_inst_176_);
v_toCommSemiring_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc_ref(v_toCommSemiring_180_);
lean_dec_ref(v___x_179_);
v___x_181_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toCommSemiring_180_);
v_toZero_182_ = lean_ctor_get(v___x_181_, 1);
lean_inc(v_toZero_182_);
lean_dec_ref(v___x_181_);
v___x_183_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_176_);
v_toRing_184_ = lean_ctor_get(v___x_183_, 0);
lean_inc_ref(v_toRing_184_);
lean_dec_ref(v___x_183_);
v___x_185_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_184_);
v_toAddMonoidWithOne_186_ = lean_ctor_get(v___x_185_, 1);
lean_inc_ref(v_toAddMonoidWithOne_186_);
lean_dec_ref(v___x_185_);
switch(lean_obj_tag(v_x_178_))
{
case 0:
{
lean_dec_ref(v_toAddMonoidWithOne_186_);
lean_dec_ref(v_a_177_);
return v_toZero_182_;
}
case 1:
{
lean_object* v_toOne_187_; 
lean_dec(v_toZero_182_);
lean_dec_ref(v_a_177_);
v_toOne_187_ = lean_ctor_get(v_toAddMonoidWithOne_186_, 2);
lean_inc(v_toOne_187_);
lean_dec_ref(v_toAddMonoidWithOne_186_);
return v_toOne_187_;
}
case 2:
{
lean_object* v_i_188_; lean_object* v_instance__assignment_189_; lean_object* v___x_190_; 
lean_dec_ref(v_toAddMonoidWithOne_186_);
lean_dec(v_toZero_182_);
v_i_188_ = lean_ctor_get(v_x_178_, 0);
lean_inc(v_i_188_);
lean_dec_ref_known(v_x_178_, 1);
v_instance__assignment_189_ = lean_ctor_get(v_a_177_, 0);
lean_inc(v_instance__assignment_189_);
lean_dec_ref(v_a_177_);
v___x_190_ = lean_apply_1(v_instance__assignment_189_, v_i_188_);
return v___x_190_;
}
default: 
{
lean_object* v_i_191_; lean_object* v_witness__assignment_192_; lean_object* v___x_193_; 
lean_dec_ref(v_toAddMonoidWithOne_186_);
lean_dec(v_toZero_182_);
v_i_191_ = lean_ctor_get(v_x_178_, 0);
lean_inc(v_i_191_);
lean_dec_ref_known(v_x_178_, 1);
v_witness__assignment_192_ = lean_ctor_get(v_a_177_, 1);
lean_inc(v_witness__assignment_192_);
lean_dec_ref(v_a_177_);
v___x_193_ = lean_apply_1(v_witness__assignment_192_, v_i_191_);
return v___x_193_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_eval(lean_object* v_F_194_, lean_object* v_inst_195_, lean_object* v_a_196_, lean_object* v_x_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lp_ark_x2dr1cs_ArkR1CS_Variable_eval___redArg(v_inst_195_, v_a_196_, v_x_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_zero___redArg(){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_box(0);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_zero___redArg___boxed(lean_object* v___dummy_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_zero___redArg();
return v_res_202_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_zero(lean_object* v_F_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = lean_box(0);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar___redArg(lean_object* v_inst_205_, lean_object* v_v_206_){
_start:
{
lean_object* v___x_207_; lean_object* v_toRing_208_; lean_object* v___x_209_; lean_object* v_toAddMonoidWithOne_210_; lean_object* v_toOne_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_207_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_205_);
v_toRing_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc_ref(v_toRing_208_);
lean_dec_ref(v___x_207_);
v___x_209_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_208_);
v_toAddMonoidWithOne_210_ = lean_ctor_get(v___x_209_, 1);
lean_inc_ref(v_toAddMonoidWithOne_210_);
lean_dec_ref(v___x_209_);
v_toOne_211_ = lean_ctor_get(v_toAddMonoidWithOne_210_, 2);
lean_inc(v_toOne_211_);
lean_dec_ref(v_toAddMonoidWithOne_210_);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v_toOne_211_);
lean_ctor_set(v___x_212_, 1, v_v_206_);
v___x_213_ = lean_box(0);
v___x_214_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_212_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar(lean_object* v_F_215_, lean_object* v_inst_216_, lean_object* v_v_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar___redArg(v_inst_216_, v_v_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofTerm___redArg(lean_object* v_c_219_, lean_object* v_v_220_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v_c_219_);
lean_ctor_set(v___x_221_, 1, v_v_220_);
v___x_222_ = lean_box(0);
v___x_223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_221_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofTerm(lean_object* v_F_224_, lean_object* v_c_225_, lean_object* v_v_226_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofTerm___redArg(v_c_225_, v_v_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar___redArg___lam__0(lean_object* v_inst_228_, lean_object* v_c_229_, lean_object* v_t_230_){
_start:
{
lean_object* v_fst_231_; lean_object* v_snd_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_240_; 
v_fst_231_ = lean_ctor_get(v_t_230_, 0);
v_snd_232_ = lean_ctor_get(v_t_230_, 1);
v_isSharedCheck_240_ = !lean_is_exclusive(v_t_230_);
if (v_isSharedCheck_240_ == 0)
{
v___x_234_ = v_t_230_;
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_snd_232_);
lean_inc(v_fst_231_);
lean_dec(v_t_230_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_236_ = lean_apply_2(v_inst_228_, v_fst_231_, v_c_229_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 0, v___x_236_);
v___x_238_ = v___x_234_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v_snd_232_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar___redArg(lean_object* v_inst_241_, lean_object* v_lc_242_, lean_object* v_c_243_){
_start:
{
lean_object* v___f_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___f_244_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar___redArg___lam__0), 3, 2);
lean_closure_set(v___f_244_, 0, v_inst_241_);
lean_closure_set(v___f_244_, 1, v_c_243_);
v___x_245_ = lean_box(0);
v___x_246_ = l_List_mapTR_loop___redArg(v___f_244_, v_lc_242_, v___x_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar(lean_object* v_F_247_, lean_object* v_inst_248_, lean_object* v_lc_249_, lean_object* v_c_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar___redArg(v_inst_248_, v_lc_249_, v_c_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff___redArg(lean_object* v_inst_252_, lean_object* v_a_253_, lean_object* v_b_254_){
_start:
{
lean_object* v___x_255_; lean_object* v_toCommSemiring_256_; lean_object* v___x_257_; lean_object* v_toMul_258_; lean_object* v___x_259_; lean_object* v_toRing_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v_toNeg_263_; lean_object* v___x_264_; lean_object* v_toAddMonoidWithOne_265_; lean_object* v_toOne_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_255_ = lp_mathlib_Field_toSemifield___redArg(v_inst_252_);
v_toCommSemiring_256_ = lean_ctor_get(v___x_255_, 0);
lean_inc_ref(v_toCommSemiring_256_);
lean_dec_ref(v___x_255_);
v___x_257_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_256_);
v_toMul_258_ = lean_ctor_get(v___x_257_, 0);
lean_inc(v_toMul_258_);
lean_dec_ref(v___x_257_);
v___x_259_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_252_);
v_toRing_260_ = lean_ctor_get(v___x_259_, 0);
lean_inc_ref(v_toRing_260_);
lean_dec_ref(v___x_259_);
v___x_261_ = lp_mathlib_Ring_toAddCommGroup___redArg(v_toRing_260_);
v___x_262_ = lp_mathlib_SubNegZeroMonoid_toNegZeroClass___redArg(v___x_261_);
lean_dec_ref(v___x_261_);
v_toNeg_263_ = lean_ctor_get(v___x_262_, 1);
lean_inc(v_toNeg_263_);
lean_dec_ref(v___x_262_);
v___x_264_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_260_);
v_toAddMonoidWithOne_265_ = lean_ctor_get(v___x_264_, 1);
lean_inc_ref(v_toAddMonoidWithOne_265_);
lean_dec_ref(v___x_264_);
v_toOne_266_ = lean_ctor_get(v_toAddMonoidWithOne_265_, 2);
lean_inc(v_toOne_266_);
lean_dec_ref(v_toAddMonoidWithOne_265_);
v___x_267_ = lean_apply_1(v_toNeg_263_, v_toOne_266_);
v___x_268_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar___redArg(v_toMul_258_, v_b_254_, v___x_267_);
v___x_269_ = l_List_appendTR___redArg(v_a_253_, v___x_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff(lean_object* v_F_270_, lean_object* v_inst_271_, lean_object* v_a_272_, lean_object* v_b_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff___redArg(v_inst_271_, v_a_272_, v_b_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg___lam__0(lean_object* v_inst_275_, lean_object* v_a_276_, lean_object* v_toMul_277_, lean_object* v_t_278_){
_start:
{
lean_object* v_fst_279_; lean_object* v_snd_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v_fst_279_ = lean_ctor_get(v_t_278_, 0);
lean_inc(v_fst_279_);
v_snd_280_ = lean_ctor_get(v_t_278_, 1);
lean_inc(v_snd_280_);
lean_dec_ref(v_t_278_);
v___x_281_ = lp_ark_x2dr1cs_ArkR1CS_Variable_eval___redArg(v_inst_275_, v_a_276_, v_snd_280_);
v___x_282_ = lean_apply_2(v_toMul_277_, v_fst_279_, v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg(lean_object* v_inst_283_, lean_object* v_a_284_, lean_object* v_lc_285_){
_start:
{
lean_object* v___x_286_; lean_object* v_toCommSemiring_287_; lean_object* v___x_288_; lean_object* v_toMul_289_; lean_object* v_toAdd_290_; lean_object* v___x_291_; lean_object* v_toZero_292_; lean_object* v___f_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_286_ = lp_mathlib_Field_toSemifield___redArg(v_inst_283_);
v_toCommSemiring_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc_ref_n(v_toCommSemiring_287_, 2);
lean_dec_ref(v___x_286_);
v___x_288_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_287_);
v_toMul_289_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_toMul_289_);
v_toAdd_290_ = lean_ctor_get(v___x_288_, 1);
lean_inc(v_toAdd_290_);
lean_dec_ref(v___x_288_);
v___x_291_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toCommSemiring_287_);
v_toZero_292_ = lean_ctor_get(v___x_291_, 1);
lean_inc(v_toZero_292_);
lean_dec_ref(v___x_291_);
v___f_293_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg___lam__0), 4, 3);
lean_closure_set(v___f_293_, 0, v_inst_283_);
lean_closure_set(v___f_293_, 1, v_a_284_);
lean_closure_set(v___f_293_, 2, v_toMul_289_);
v___x_294_ = lean_box(0);
v___x_295_ = l_List_mapTR_loop___redArg(v___f_293_, v_lc_285_, v___x_294_);
v___x_296_ = l_List_sum___redArg(v_toAdd_290_, v_toZero_292_, v___x_295_);
lean_dec(v_toZero_292_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval(lean_object* v_F_297_, lean_object* v_inst_298_, lean_object* v_a_299_, lean_object* v_lc_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg(v_inst_298_, v_a_299_, v_lc_300_);
return v___x_301_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_Field_Defs(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_BigOperators_Group_List_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Tactic_Ring(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ark_x2dr1cs_ArkR1CS_Relations_Variable(uint8_t builtin) {
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
res = initialize_mathlib_Mathlib_Algebra_Field_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Algebra_BigOperators_Group_List_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Tactic_Ring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
