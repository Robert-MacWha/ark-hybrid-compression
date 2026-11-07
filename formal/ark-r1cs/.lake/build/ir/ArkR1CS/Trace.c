// Lean compiler output
// Module: ArkR1CS.Trace
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_mathlib_Field_toSemifield___redArg(lean_object*);
lean_object* lp_mathlib_instDistribOfSemiring___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lp_mathlib_instMulZeroClassOfSemiring___redArg(lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___redArg(lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___redArg(lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_constraints___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_Variable_column___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_column___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_Variable_column___closed__0_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_column(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_column___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_insertSorted___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_insertSorted(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_mergeTerm___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_mergeTerm___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_mergeTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_mergeTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___lam__0___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___lam__0(lean_object*, lean_object*);
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___closed__0_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___closed__1 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderLC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg___closed__0_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg___closed__1 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderRows(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "inputs="};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__0_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " witnesses="};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__1 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__1_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " constraints="};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__2 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__2_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instance: "};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__3 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__3_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "witness: "};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__4 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__4_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__5 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__5_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_column(lean_object* v_numInstance_3_, lean_object* v_x_4_){
_start:
{
switch(lean_obj_tag(v_x_4_))
{
case 0:
{
lean_object* v___x_5_; 
v___x_5_ = lean_box(0);
return v___x_5_;
}
case 1:
{
lean_object* v___x_6_; 
v___x_6_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_Variable_column___closed__0));
return v___x_6_;
}
case 2:
{
lean_object* v_i_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_14_; 
v_i_7_ = lean_ctor_get(v_x_4_, 0);
v_isSharedCheck_14_ = !lean_is_exclusive(v_x_4_);
if (v_isSharedCheck_14_ == 0)
{
v___x_9_ = v_x_4_;
v_isShared_10_ = v_isSharedCheck_14_;
goto v_resetjp_8_;
}
else
{
lean_inc(v_i_7_);
lean_dec(v_x_4_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_14_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
lean_object* v___x_12_; 
if (v_isShared_10_ == 0)
{
lean_ctor_set_tag(v___x_9_, 1);
v___x_12_ = v___x_9_;
goto v_reusejp_11_;
}
else
{
lean_object* v_reuseFailAlloc_13_; 
v_reuseFailAlloc_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_13_, 0, v_i_7_);
v___x_12_ = v_reuseFailAlloc_13_;
goto v_reusejp_11_;
}
v_reusejp_11_:
{
return v___x_12_;
}
}
}
default: 
{
lean_object* v_i_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_23_; 
v_i_15_ = lean_ctor_get(v_x_4_, 0);
v_isSharedCheck_23_ = !lean_is_exclusive(v_x_4_);
if (v_isSharedCheck_23_ == 0)
{
v___x_17_ = v_x_4_;
v_isShared_18_ = v_isSharedCheck_23_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_i_15_);
lean_dec(v_x_4_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_23_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_19_; lean_object* v___x_21_; 
v___x_19_ = lean_nat_add(v_numInstance_3_, v_i_15_);
lean_dec(v_i_15_);
if (v_isShared_18_ == 0)
{
lean_ctor_set_tag(v___x_17_, 1);
lean_ctor_set(v___x_17_, 0, v___x_19_);
v___x_21_ = v___x_17_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v___x_19_);
v___x_21_ = v_reuseFailAlloc_22_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
return v___x_21_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Variable_column___boxed(lean_object* v_numInstance_24_, lean_object* v_x_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = lp_ark_x2dr1cs_ArkR1CS_Variable_column(v_numInstance_24_, v_x_25_);
lean_dec(v_numInstance_24_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_insertSorted___redArg(lean_object* v_p_27_, lean_object* v_x_28_){
_start:
{
if (lean_obj_tag(v_x_28_) == 0)
{
lean_object* v___x_29_; 
v___x_29_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_29_, 0, v_p_27_);
lean_ctor_set(v___x_29_, 1, v_x_28_);
return v___x_29_;
}
else
{
lean_object* v_head_30_; lean_object* v_tail_31_; lean_object* v_fst_32_; lean_object* v_fst_33_; uint8_t v___x_34_; 
v_head_30_ = lean_ctor_get(v_x_28_, 0);
lean_inc(v_head_30_);
v_tail_31_ = lean_ctor_get(v_x_28_, 1);
v_fst_32_ = lean_ctor_get(v_p_27_, 0);
v_fst_33_ = lean_ctor_get(v_head_30_, 0);
v___x_34_ = lean_nat_dec_le(v_fst_32_, v_fst_33_);
if (v___x_34_ == 0)
{
lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
lean_inc(v_tail_31_);
v_isSharedCheck_42_ = !lean_is_exclusive(v_x_28_);
if (v_isSharedCheck_42_ == 0)
{
lean_object* v_unused_43_; lean_object* v_unused_44_; 
v_unused_43_ = lean_ctor_get(v_x_28_, 1);
lean_dec(v_unused_43_);
v_unused_44_ = lean_ctor_get(v_x_28_, 0);
lean_dec(v_unused_44_);
v___x_36_ = v_x_28_;
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
else
{
lean_dec(v_x_28_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
v___x_38_ = lp_ark_x2dr1cs_ArkR1CS_insertSorted___redArg(v_p_27_, v_tail_31_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 1, v___x_38_);
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v_head_30_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
else
{
lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_51_; 
v_isSharedCheck_51_ = !lean_is_exclusive(v_head_30_);
if (v_isSharedCheck_51_ == 0)
{
lean_object* v_unused_52_; lean_object* v_unused_53_; 
v_unused_52_ = lean_ctor_get(v_head_30_, 1);
lean_dec(v_unused_52_);
v_unused_53_ = lean_ctor_get(v_head_30_, 0);
lean_dec(v_unused_53_);
v___x_46_ = v_head_30_;
v_isShared_47_ = v_isSharedCheck_51_;
goto v_resetjp_45_;
}
else
{
lean_dec(v_head_30_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_51_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_49_; 
if (v_isShared_47_ == 0)
{
lean_ctor_set_tag(v___x_46_, 1);
lean_ctor_set(v___x_46_, 1, v_x_28_);
lean_ctor_set(v___x_46_, 0, v_p_27_);
v___x_49_ = v___x_46_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_p_27_);
lean_ctor_set(v_reuseFailAlloc_50_, 1, v_x_28_);
v___x_49_ = v_reuseFailAlloc_50_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
return v___x_49_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_insertSorted(lean_object* v_F_54_, lean_object* v_p_55_, lean_object* v_x_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lp_ark_x2dr1cs_ArkR1CS_insertSorted___redArg(v_p_55_, v_x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_mergeTerm___redArg(lean_object* v_inst_58_, lean_object* v_p_59_, lean_object* v_x_60_){
_start:
{
lean_object* v___x_61_; lean_object* v_toCommSemiring_62_; lean_object* v___x_63_; 
v___x_61_ = lp_mathlib_Field_toSemifield___redArg(v_inst_58_);
v_toCommSemiring_62_ = lean_ctor_get(v___x_61_, 0);
lean_inc_ref(v_toCommSemiring_62_);
lean_dec_ref(v___x_61_);
v___x_63_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_62_);
if (lean_obj_tag(v_x_60_) == 0)
{
lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_70_; 
v_isSharedCheck_70_ = !lean_is_exclusive(v___x_63_);
if (v_isSharedCheck_70_ == 0)
{
lean_object* v_unused_71_; lean_object* v_unused_72_; 
v_unused_71_ = lean_ctor_get(v___x_63_, 1);
lean_dec(v_unused_71_);
v_unused_72_ = lean_ctor_get(v___x_63_, 0);
lean_dec(v_unused_72_);
v___x_65_ = v___x_63_;
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
else
{
lean_dec(v___x_63_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_68_; 
if (v_isShared_66_ == 0)
{
lean_ctor_set_tag(v___x_65_, 1);
lean_ctor_set(v___x_65_, 1, v_x_60_);
lean_ctor_set(v___x_65_, 0, v_p_59_);
v___x_68_ = v___x_65_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_p_59_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v_x_60_);
v___x_68_ = v_reuseFailAlloc_69_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
return v___x_68_;
}
}
}
else
{
lean_object* v_head_73_; lean_object* v_toAdd_74_; lean_object* v_tail_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_101_; 
v_head_73_ = lean_ctor_get(v_x_60_, 0);
lean_inc(v_head_73_);
v_toAdd_74_ = lean_ctor_get(v___x_63_, 1);
lean_inc(v_toAdd_74_);
lean_dec_ref(v___x_63_);
v_tail_75_ = lean_ctor_get(v_x_60_, 1);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_60_);
if (v_isSharedCheck_101_ == 0)
{
lean_object* v_unused_102_; 
v_unused_102_ = lean_ctor_get(v_x_60_, 0);
lean_dec(v_unused_102_);
v___x_77_ = v_x_60_;
v_isShared_78_ = v_isSharedCheck_101_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_tail_75_);
lean_dec(v_x_60_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_101_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v_fst_79_; lean_object* v_snd_80_; lean_object* v_fst_81_; lean_object* v_snd_82_; uint8_t v___x_83_; 
v_fst_79_ = lean_ctor_get(v_p_59_, 0);
v_snd_80_ = lean_ctor_get(v_p_59_, 1);
v_fst_81_ = lean_ctor_get(v_head_73_, 0);
v_snd_82_ = lean_ctor_get(v_head_73_, 1);
v___x_83_ = lean_nat_dec_eq(v_fst_79_, v_fst_81_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; lean_object* v___x_86_; 
lean_dec(v_toAdd_74_);
v___x_84_ = lp_ark_x2dr1cs_ArkR1CS_mergeTerm___redArg(v_inst_58_, v_p_59_, v_tail_75_);
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 1, v___x_84_);
v___x_86_ = v___x_77_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v_head_73_);
lean_ctor_set(v_reuseFailAlloc_87_, 1, v___x_84_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
else
{
lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_98_; 
lean_inc(v_snd_82_);
lean_inc(v_fst_81_);
lean_inc(v_snd_80_);
lean_dec_ref(v_p_59_);
v_isSharedCheck_98_ = !lean_is_exclusive(v_head_73_);
if (v_isSharedCheck_98_ == 0)
{
lean_object* v_unused_99_; lean_object* v_unused_100_; 
v_unused_99_ = lean_ctor_get(v_head_73_, 1);
lean_dec(v_unused_99_);
v_unused_100_ = lean_ctor_get(v_head_73_, 0);
lean_dec(v_unused_100_);
v___x_89_ = v_head_73_;
v_isShared_90_ = v_isSharedCheck_98_;
goto v_resetjp_88_;
}
else
{
lean_dec(v_head_73_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_98_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_91_; lean_object* v___x_93_; 
v___x_91_ = lean_apply_2(v_toAdd_74_, v_snd_82_, v_snd_80_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 1, v___x_91_);
v___x_93_ = v___x_89_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_fst_81_);
lean_ctor_set(v_reuseFailAlloc_97_, 1, v___x_91_);
v___x_93_ = v_reuseFailAlloc_97_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
lean_object* v___x_95_; 
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 0, v___x_93_);
v___x_95_ = v___x_77_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_93_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v_tail_75_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_mergeTerm___redArg___boxed(lean_object* v_inst_103_, lean_object* v_p_104_, lean_object* v_x_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = lp_ark_x2dr1cs_ArkR1CS_mergeTerm___redArg(v_inst_103_, v_p_104_, v_x_105_);
lean_dec_ref(v_inst_103_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_mergeTerm(lean_object* v_F_107_, lean_object* v_inst_108_, lean_object* v_inst_109_, lean_object* v_p_110_, lean_object* v_x_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = lp_ark_x2dr1cs_ArkR1CS_mergeTerm___redArg(v_inst_108_, v_p_110_, v_x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_mergeTerm___boxed(lean_object* v_F_113_, lean_object* v_inst_114_, lean_object* v_inst_115_, lean_object* v_p_116_, lean_object* v_x_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = lp_ark_x2dr1cs_ArkR1CS_mergeTerm(v_F_113_, v_inst_114_, v_inst_115_, v_p_116_, v_x_117_);
lean_dec_ref(v_inst_115_);
lean_dec_ref(v_inst_114_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__0(lean_object* v_numInstance_119_, lean_object* v_inst_120_, lean_object* v_acc_121_, lean_object* v_t_122_){
_start:
{
lean_object* v_fst_123_; lean_object* v_snd_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_134_; 
v_fst_123_ = lean_ctor_get(v_t_122_, 0);
v_snd_124_ = lean_ctor_get(v_t_122_, 1);
v_isSharedCheck_134_ = !lean_is_exclusive(v_t_122_);
if (v_isSharedCheck_134_ == 0)
{
v___x_126_ = v_t_122_;
v_isShared_127_ = v_isSharedCheck_134_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_snd_124_);
lean_inc(v_fst_123_);
lean_dec(v_t_122_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_134_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_128_; 
v___x_128_ = lp_ark_x2dr1cs_ArkR1CS_Variable_column(v_numInstance_119_, v_snd_124_);
if (lean_obj_tag(v___x_128_) == 0)
{
lean_del_object(v___x_126_);
lean_dec(v_fst_123_);
return v_acc_121_;
}
else
{
lean_object* v_val_129_; lean_object* v___x_131_; 
v_val_129_ = lean_ctor_get(v___x_128_, 0);
lean_inc(v_val_129_);
lean_dec_ref_known(v___x_128_, 1);
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 1, v_fst_123_);
lean_ctor_set(v___x_126_, 0, v_val_129_);
v___x_131_ = v___x_126_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_val_129_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v_fst_123_);
v___x_131_ = v_reuseFailAlloc_133_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
lean_object* v___x_132_; 
v___x_132_ = lp_ark_x2dr1cs_ArkR1CS_mergeTerm___redArg(v_inst_120_, v___x_131_, v_acc_121_);
return v___x_132_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__0___boxed(lean_object* v_numInstance_135_, lean_object* v_inst_136_, lean_object* v_acc_137_, lean_object* v_t_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__0(v_numInstance_135_, v_inst_136_, v_acc_137_, v_t_138_);
lean_dec_ref(v_inst_136_);
lean_dec(v_numInstance_135_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__1(lean_object* v_acc_140_, lean_object* v_p_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lp_ark_x2dr1cs_ArkR1CS_insertSorted___redArg(v_p_141_, v_acc_140_);
return v___x_142_;
}
}
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__2(lean_object* v_inst_143_, lean_object* v_toZero_144_, lean_object* v_p_145_){
_start:
{
lean_object* v_snd_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v_snd_146_ = lean_ctor_get(v_p_145_, 1);
lean_inc(v_snd_146_);
lean_dec_ref(v_p_145_);
v___x_147_ = lean_apply_2(v_inst_143_, v_snd_146_, v_toZero_144_);
v___x_148_ = lean_unbox(v___x_147_);
if (v___x_148_ == 0)
{
uint8_t v___x_149_; 
v___x_149_ = 1;
return v___x_149_;
}
else
{
uint8_t v___x_150_; 
v___x_150_ = 0;
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__2___boxed(lean_object* v_inst_151_, lean_object* v_toZero_152_, lean_object* v_p_153_){
_start:
{
uint8_t v_res_154_; lean_object* v_r_155_; 
v_res_154_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__2(v_inst_151_, v_toZero_152_, v_p_153_);
v_r_155_ = lean_box(v_res_154_);
return v_r_155_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg(lean_object* v_inst_157_, lean_object* v_inst_158_, lean_object* v_numInstance_159_, lean_object* v_lc_160_){
_start:
{
lean_object* v___x_161_; lean_object* v_toCommSemiring_162_; lean_object* v___x_163_; lean_object* v_toZero_164_; lean_object* v___f_165_; lean_object* v___f_166_; lean_object* v___f_167_; lean_object* v___x_168_; lean_object* v_merged_169_; lean_object* v_sorted_170_; lean_object* v___x_171_; 
v___x_161_ = lp_mathlib_Field_toSemifield___redArg(v_inst_157_);
v_toCommSemiring_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc_ref(v_toCommSemiring_162_);
lean_dec_ref(v___x_161_);
v___x_163_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toCommSemiring_162_);
v_toZero_164_ = lean_ctor_get(v___x_163_, 1);
lean_inc(v_toZero_164_);
lean_dec_ref(v___x_163_);
v___f_165_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_165_, 0, v_numInstance_159_);
lean_closure_set(v___f_165_, 1, v_inst_157_);
v___f_166_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___closed__0));
v___f_167_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg___lam__2___boxed), 3, 2);
lean_closure_set(v___f_167_, 0, v_inst_158_);
lean_closure_set(v___f_167_, 1, v_toZero_164_);
v___x_168_ = lean_box(0);
v_merged_169_ = l_List_foldl___redArg(v___f_165_, v___x_168_, v_lc_160_);
v_sorted_170_ = l_List_foldl___redArg(v___f_166_, v___x_168_, v_merged_169_);
v___x_171_ = l_List_filterTR_loop___redArg(v___f_167_, v_sorted_170_, v___x_168_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon(lean_object* v_F_172_, lean_object* v_inst_173_, lean_object* v_inst_174_, lean_object* v_numInstance_175_, lean_object* v_lc_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg(v_inst_173_, v_inst_174_, v_numInstance_175_, v_lc_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___lam__0(lean_object* v_showF_179_, lean_object* v_p_180_){
_start:
{
lean_object* v_fst_181_; lean_object* v_snd_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v_fst_181_ = lean_ctor_get(v_p_180_, 0);
lean_inc(v_fst_181_);
v_snd_182_ = lean_ctor_get(v_p_180_, 1);
lean_inc(v_snd_182_);
lean_dec_ref(v_p_180_);
v___x_183_ = l_Nat_reprFast(v_fst_181_);
v___x_184_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___lam__0___closed__0));
v___x_185_ = lean_string_append(v___x_183_, v___x_184_);
v___x_186_ = lean_apply_1(v_showF_179_, v_snd_182_);
v___x_187_ = lean_string_append(v___x_185_, v___x_186_);
lean_dec_ref(v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg(lean_object* v_inst_190_, lean_object* v_inst_191_, lean_object* v_showF_192_, lean_object* v_numInstance_193_, lean_object* v_lc_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_canon___redArg(v_inst_190_, v_inst_191_, v_numInstance_193_, v_lc_194_);
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v___x_196_; 
lean_dec_ref(v_showF_192_);
v___x_196_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___closed__0));
return v___x_196_;
}
else
{
lean_object* v___f_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___f_197_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___lam__0), 2, 1);
lean_closure_set(v___f_197_, 0, v_showF_192_);
v___x_198_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___closed__1));
v___x_199_ = lean_box(0);
v___x_200_ = l_List_mapTR_loop___redArg(v___f_197_, v___x_195_, v___x_199_);
v___x_201_ = l_String_intercalate(v___x_198_, v___x_200_);
return v___x_201_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderLC(lean_object* v_F_202_, lean_object* v_inst_203_, lean_object* v_inst_204_, lean_object* v_showF_205_, lean_object* v_numInstance_206_, lean_object* v_lc_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg(v_inst_203_, v_inst_204_, v_showF_205_, v_numInstance_206_, v_lc_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg(lean_object* v_inst_211_, lean_object* v_inst_212_, lean_object* v_showF_213_, lean_object* v_numInstance_214_, lean_object* v_x_215_, lean_object* v_x_216_){
_start:
{
if (lean_obj_tag(v_x_216_) == 0)
{
lean_object* v___x_217_; 
lean_dec(v_x_215_);
lean_dec(v_numInstance_214_);
lean_dec_ref(v_showF_213_);
lean_dec_ref(v_inst_212_);
lean_dec_ref(v_inst_211_);
v___x_217_ = lean_box(0);
return v___x_217_;
}
else
{
lean_object* v_head_218_; lean_object* v_tail_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_244_; 
v_head_218_ = lean_ctor_get(v_x_216_, 0);
v_tail_219_ = lean_ctor_get(v_x_216_, 1);
v_isSharedCheck_244_ = !lean_is_exclusive(v_x_216_);
if (v_isSharedCheck_244_ == 0)
{
v___x_221_ = v_x_216_;
v_isShared_222_ = v_isSharedCheck_244_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_tail_219_);
lean_inc(v_head_218_);
lean_dec(v_x_216_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_244_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v_a_223_; lean_object* v_b_224_; lean_object* v_c_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_242_; 
v_a_223_ = lean_ctor_get(v_head_218_, 0);
lean_inc(v_a_223_);
v_b_224_ = lean_ctor_get(v_head_218_, 1);
lean_inc(v_b_224_);
v_c_225_ = lean_ctor_get(v_head_218_, 2);
lean_inc(v_c_225_);
lean_dec(v_head_218_);
lean_inc(v_x_215_);
v___x_226_ = l_Nat_reprFast(v_x_215_);
v___x_227_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg___closed__0));
v___x_228_ = lean_string_append(v___x_226_, v___x_227_);
lean_inc_n(v_numInstance_214_, 3);
lean_inc_ref_n(v_showF_213_, 3);
lean_inc_ref_n(v_inst_212_, 3);
lean_inc_ref_n(v_inst_211_, 3);
v___x_229_ = lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg(v_inst_211_, v_inst_212_, v_showF_213_, v_numInstance_214_, v_a_223_);
v___x_230_ = lean_string_append(v___x_228_, v___x_229_);
lean_dec_ref(v___x_229_);
v___x_231_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg___closed__1));
v___x_232_ = lean_string_append(v___x_230_, v___x_231_);
v___x_233_ = lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg(v_inst_211_, v_inst_212_, v_showF_213_, v_numInstance_214_, v_b_224_);
v___x_234_ = lean_string_append(v___x_232_, v___x_233_);
lean_dec_ref(v___x_233_);
v___x_235_ = lean_string_append(v___x_234_, v___x_231_);
v___x_236_ = lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg(v_inst_211_, v_inst_212_, v_showF_213_, v_numInstance_214_, v_c_225_);
v___x_237_ = lean_string_append(v___x_235_, v___x_236_);
lean_dec_ref(v___x_236_);
v___x_238_ = lean_unsigned_to_nat(1u);
v___x_239_ = lean_nat_add(v_x_215_, v___x_238_);
lean_dec(v_x_215_);
v___x_240_ = lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg(v_inst_211_, v_inst_212_, v_showF_213_, v_numInstance_214_, v___x_239_, v_tail_219_);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 1, v___x_240_);
lean_ctor_set(v___x_221_, 0, v___x_237_);
v___x_242_ = v___x_221_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_237_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v___x_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderRows(lean_object* v_F_245_, lean_object* v_inst_246_, lean_object* v_inst_247_, lean_object* v_showF_248_, lean_object* v_numInstance_249_, lean_object* v_x_250_, lean_object* v_x_251_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg(v_inst_246_, v_inst_247_, v_showF_248_, v_numInstance_249_, v_x_250_, v_x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___lam__0(lean_object* v_a_253_, lean_object* v___x_254_, lean_object* v_showF_255_, lean_object* v_i_256_){
_start:
{
lean_object* v_instance__assignment_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v_instance__assignment_257_ = lean_ctor_get(v_a_253_, 0);
lean_inc(v_instance__assignment_257_);
lean_dec_ref(v_a_253_);
v___x_258_ = lean_nat_add(v_i_256_, v___x_254_);
v___x_259_ = lean_apply_1(v_instance__assignment_257_, v___x_258_);
v___x_260_ = lean_apply_1(v_showF_255_, v___x_259_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___lam__0___boxed(lean_object* v_a_261_, lean_object* v___x_262_, lean_object* v_showF_263_, lean_object* v_i_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___lam__0(v_a_261_, v___x_262_, v_showF_263_, v_i_264_);
lean_dec(v_i_264_);
lean_dec(v___x_262_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___lam__1(lean_object* v_a_266_, lean_object* v_showF_267_, lean_object* v_j_268_){
_start:
{
lean_object* v_witness__assignment_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_witness__assignment_269_ = lean_ctor_get(v_a_266_, 1);
lean_inc(v_witness__assignment_269_);
lean_dec_ref(v_a_266_);
v___x_270_ = lean_apply_1(v_witness__assignment_269_, v_j_268_);
v___x_271_ = lean_apply_1(v_showF_267_, v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg(lean_object* v_inst_278_, lean_object* v_inst_279_, lean_object* v_showF_280_, lean_object* v_ops_281_){
_start:
{
lean_object* v_numInputs_282_; lean_object* v___x_283_; lean_object* v_numInstance_284_; lean_object* v_numWitnesses_285_; lean_object* v_a_286_; lean_object* v___f_287_; lean_object* v___f_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v_header_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v_inst_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v_wit_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v_numInputs_282_ = lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___redArg(v_ops_281_);
v___x_283_ = lean_unsigned_to_nat(1u);
v_numInstance_284_ = lean_nat_add(v_numInputs_282_, v___x_283_);
v_numWitnesses_285_ = lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___redArg(v_ops_281_);
lean_inc(v_ops_281_);
v_a_286_ = lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg(v_inst_278_, v_ops_281_);
lean_inc_ref_n(v_showF_280_, 2);
lean_inc_ref(v_a_286_);
v___f_287_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_287_, 0, v_a_286_);
lean_closure_set(v___f_287_, 1, v___x_283_);
lean_closure_set(v___f_287_, 2, v_showF_280_);
v___f_288_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___lam__1), 3, 2);
lean_closure_set(v___f_288_, 0, v_a_286_);
lean_closure_set(v___f_288_, 1, v_showF_280_);
v___x_289_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__0));
lean_inc(v_numInputs_282_);
v___x_290_ = l_Nat_reprFast(v_numInputs_282_);
v___x_291_ = lean_string_append(v___x_289_, v___x_290_);
lean_dec_ref(v___x_290_);
v___x_292_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__1));
v___x_293_ = lean_string_append(v___x_291_, v___x_292_);
lean_inc(v_numWitnesses_285_);
v___x_294_ = l_Nat_reprFast(v_numWitnesses_285_);
v___x_295_ = lean_string_append(v___x_293_, v___x_294_);
lean_dec_ref(v___x_294_);
v___x_296_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__2));
v___x_297_ = lean_string_append(v___x_295_, v___x_296_);
v___x_298_ = lp_ark_x2dr1cs_ArkR1CS_Op_constraints___redArg(v_ops_281_);
v___x_299_ = l_List_lengthTR___redArg(v___x_298_);
v___x_300_ = l_Nat_reprFast(v___x_299_);
v_header_301_ = lean_string_append(v___x_297_, v___x_300_);
lean_dec_ref(v___x_300_);
v___x_302_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__3));
v___x_303_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderLC___redArg___closed__1));
v___x_304_ = l_List_range(v_numInputs_282_);
v___x_305_ = lean_box(0);
v___x_306_ = l_List_mapTR_loop___redArg(v___f_287_, v___x_304_, v___x_305_);
v___x_307_ = l_String_intercalate(v___x_303_, v___x_306_);
v_inst_308_ = lean_string_append(v___x_302_, v___x_307_);
lean_dec_ref(v___x_307_);
v___x_309_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__4));
v___x_310_ = l_List_range(v_numWitnesses_285_);
v___x_311_ = l_List_mapTR_loop___redArg(v___f_288_, v___x_310_, v___x_305_);
v___x_312_ = l_String_intercalate(v___x_303_, v___x_311_);
v_wit_313_ = lean_string_append(v___x_309_, v___x_312_);
lean_dec_ref(v___x_312_);
v___x_314_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg___closed__5));
v___x_315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_315_, 0, v_wit_313_);
lean_ctor_set(v___x_315_, 1, v___x_305_);
v___x_316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_316_, 0, v_inst_308_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v___x_317_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_317_, 0, v_header_301_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
v___x_318_ = lean_unsigned_to_nat(0u);
v___x_319_ = lp_ark_x2dr1cs_ArkR1CS_renderRows___redArg(v_inst_278_, v_inst_279_, v_showF_280_, v_numInstance_284_, v___x_318_, v___x_298_);
v___x_320_ = l_List_appendTR___redArg(v___x_317_, v___x_319_);
v___x_321_ = l_String_intercalate(v___x_314_, v___x_320_);
v___x_322_ = lean_string_append(v___x_321_, v___x_314_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_renderTrace(lean_object* v_F_323_, lean_object* v_inst_324_, lean_object* v_inst_325_, lean_object* v_showF_326_, lean_object* v_ops_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = lp_ark_x2dr1cs_ArkR1CS_renderTrace___redArg(v_inst_324_, v_inst_325_, v_showF_326_, v_ops_327_);
return v___x_328_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ark_x2dr1cs_ArkR1CS_Relations_ConstraintSystem(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ark_x2dr1cs_ArkR1CS_Trace(uint8_t builtin) {
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
