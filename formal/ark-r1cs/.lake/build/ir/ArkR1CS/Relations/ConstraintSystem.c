// Lean compiler output
// Module: ArkR1CS.Relations.ConstraintSystem
// Imports: public import Init public meta import Init public import ArkR1CS.Relations.Variable public import Mathlib.Logic.Function.Basic
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_const___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___boxed(lean_object*, lean_object*);
lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_repr___redArg(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lp_mathlib_Field_toSemifield___redArg(lean_object*);
lean_object* lp_mathlib_instDistribOfSemiring___redArg(lean_object*);
lean_object* lp_mathlib_instMulZeroClassOfSemiring___redArg(lean_object*);
uint8_t l_List_all___redArg(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__0_value;
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprTupleOfRepr___redArg___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__0_value)} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__1 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__1_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__2 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__2_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__3 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__3_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__3_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__4 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__4_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__4_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__5 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__5_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__6 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__6_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__6_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__7 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__7_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__5_value),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__7_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__8 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__8_value;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__9;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__10 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__10_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__10_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__11 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__11_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__12 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__12_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__12_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__13 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__13_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__14 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__14_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__14_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__15 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__15_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__16 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__16_value;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__17;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__18;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__2_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__19 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__19_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__16_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__20 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__20_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_input_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_input_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witness_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witness_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_constrain_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_constrain_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ArkR1CS.Op.input"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__0_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__0_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__1 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__1_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__2 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__2_value;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ArkR1CS.Op.witness"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__5 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__5_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__5_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__6 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__6_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__7 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__7_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "ArkR1CS.Op.constrain"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__8 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__8_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__8_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__9 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__9_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__10 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__10_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_inputCount(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_constraints___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_constraints(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_Relations_ConstraintSystem_0__ArkR1CS_Op_inputCount_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_Relations_ConstraintSystem_0__ArkR1CS_Op_inputCount_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_instDecidableEqCounters_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instDecidableEqCounters_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_instDecidableEqCounters(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instDecidableEqCounters___boxed(lean_object*, lean_object*);
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "num_instance_variables"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__0_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__0_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__1 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__1_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__1_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__2 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__2_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__2_value),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__7_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__3 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__3_value;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__4;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "num_witness_variables"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__5 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__5_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__5_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__6 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__6_value;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__7;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__8;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_instReprCounters___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters___closed__0_value;
LEAN_EXPORT const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprCounters___closed__0_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_Counters_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_Counters_new___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_Counters_new___closed__0_value;
LEAN_EXPORT const lean_object* lp_ark_x2dr1cs_ArkR1CS_Counters_new = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_Counters_new___closed__0_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Counters_advance___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Counters_advance___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Counters_advance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Counters_advance___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_CS_pure, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__0___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__0, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__0_value;
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__1, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__1 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__1_value;
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__3, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__2 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__2_value;
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__6, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__3 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__3_value;
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__8, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__4 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__4_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__0_value),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__1_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__5 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__5_value;
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_CS_pure, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__6 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__6_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__5_value),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__6_value),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__2_value),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__3_value),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__4_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__7 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__7_value;
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_CS_bind, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__8 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__8_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__7_value),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__8_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__9 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__9_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg();
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___boxed(lean_object*);
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___closed__0;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__input__variable___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__input__variable___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__input__variable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__witness__variable___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__witness__variable___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__witness__variable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__lc___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__lc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_extend___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_extend(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_isSatisfied(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_isSatisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_unsigned_to_nat(5u);
v___x_18_ = lean_nat_to_int(v___x_17_);
return v___x_18_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__2));
v___x_30_ = lean_string_length(v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__17, &lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__17_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__17);
v___x_32_ = lean_nat_to_int(v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg(lean_object* v_inst_37_, lean_object* v_x_38_){
_start:
{
lean_object* v_a_39_; lean_object* v_b_40_; lean_object* v_c_41_; lean_object* v___f_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; uint8_t v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v_a_39_ = lean_ctor_get(v_x_38_, 0);
lean_inc(v_a_39_);
v_b_40_ = lean_ctor_get(v_x_38_, 1);
lean_inc(v_b_40_);
v_c_41_ = lean_ctor_get(v_x_38_, 2);
lean_inc(v_c_41_);
lean_dec_ref(v_x_38_);
v___f_42_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__1));
v___x_43_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__7));
v___x_44_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__8));
v___x_45_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__9, &lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__9_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__9);
v___x_46_ = lean_alloc_closure((void*)(l_Prod_repr___boxed), 6, 4);
lean_closure_set(v___x_46_, 0, lean_box(0));
lean_closure_set(v___x_46_, 1, lean_box(0));
lean_closure_set(v___x_46_, 2, v_inst_37_);
lean_closure_set(v___x_46_, 3, v___f_42_);
lean_inc_ref_n(v___x_46_, 2);
v___x_47_ = l_List_repr___redArg(v___x_46_, v_a_39_);
v___x_48_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_45_);
lean_ctor_set(v___x_48_, 1, v___x_47_);
v___x_49_ = 0;
v___x_50_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_50_, 0, v___x_48_);
lean_ctor_set_uint8(v___x_50_, sizeof(void*)*1, v___x_49_);
v___x_51_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_44_);
lean_ctor_set(v___x_51_, 1, v___x_50_);
v___x_52_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__11));
v___x_53_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_51_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = lean_box(1);
v___x_55_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_53_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
v___x_56_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__13));
v___x_57_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
lean_ctor_set(v___x_58_, 1, v___x_43_);
v___x_59_ = l_List_repr___redArg(v___x_46_, v_b_40_);
v___x_60_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_45_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_61_, 0, v___x_60_);
lean_ctor_set_uint8(v___x_61_, sizeof(void*)*1, v___x_49_);
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_58_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_52_);
v___x_64_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set(v___x_64_, 1, v___x_54_);
v___x_65_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__15));
v___x_66_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v___x_43_);
v___x_68_ = l_List_repr___redArg(v___x_46_, v_c_41_);
v___x_69_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_45_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
v___x_70_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set_uint8(v___x_70_, sizeof(void*)*1, v___x_49_);
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_67_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v___x_72_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__18, &lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__18_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__18);
v___x_73_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__19));
v___x_74_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v___x_71_);
v___x_75_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__20));
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_74_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_72_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set_uint8(v___x_78_, sizeof(void*)*1, v___x_49_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr(lean_object* v_F_79_, lean_object* v_inst_80_, lean_object* v_x_81_, lean_object* v_prec_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg(v_inst_80_, v_x_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___boxed(lean_object* v_F_84_, lean_object* v_inst_85_, lean_object* v_x_86_, lean_object* v_prec_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr(v_F_84_, v_inst_85_, v_x_86_, v_prec_87_);
lean_dec(v_prec_87_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint___redArg(lean_object* v_inst_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___boxed), 4, 2);
lean_closure_set(v___x_90_, 0, lean_box(0));
lean_closure_set(v___x_90_, 1, v_inst_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprConstraint(lean_object* v_F_91_, lean_object* v_inst_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___boxed), 4, 2);
lean_closure_set(v___x_93_, 0, lean_box(0));
lean_closure_set(v___x_93_, 1, v_inst_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorIdx___redArg(lean_object* v_x_94_){
_start:
{
switch(lean_obj_tag(v_x_94_))
{
case 0:
{
lean_object* v___x_95_; 
v___x_95_ = lean_unsigned_to_nat(0u);
return v___x_95_;
}
case 1:
{
lean_object* v___x_96_; 
v___x_96_ = lean_unsigned_to_nat(1u);
return v___x_96_;
}
default: 
{
lean_object* v___x_97_; 
v___x_97_ = lean_unsigned_to_nat(2u);
return v___x_97_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorIdx___redArg___boxed(lean_object* v_x_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = lp_ark_x2dr1cs_ArkR1CS_Op_ctorIdx___redArg(v_x_98_);
lean_dec_ref(v_x_98_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorIdx(lean_object* v_F_100_, lean_object* v_x_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = lp_ark_x2dr1cs_ArkR1CS_Op_ctorIdx___redArg(v_x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorIdx___boxed(lean_object* v_F_103_, lean_object* v_x_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = lp_ark_x2dr1cs_ArkR1CS_Op_ctorIdx(v_F_103_, v_x_104_);
lean_dec_ref(v_x_104_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim___redArg(lean_object* v_t_106_, lean_object* v_k_107_){
_start:
{
if (lean_obj_tag(v_t_106_) == 2)
{
lean_object* v_k_108_; lean_object* v___x_109_; 
v_k_108_ = lean_ctor_get(v_t_106_, 0);
lean_inc_ref(v_k_108_);
lean_dec_ref_known(v_t_106_, 1);
v___x_109_ = lean_apply_1(v_k_107_, v_k_108_);
return v___x_109_;
}
else
{
lean_object* v_val_110_; lean_object* v___x_111_; 
v_val_110_ = lean_ctor_get(v_t_106_, 0);
lean_inc(v_val_110_);
lean_dec_ref(v_t_106_);
v___x_111_ = lean_apply_1(v_k_107_, v_val_110_);
return v___x_111_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim(lean_object* v_F_112_, lean_object* v_motive_113_, lean_object* v_ctorIdx_114_, lean_object* v_t_115_, lean_object* v_h_116_, lean_object* v_k_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim___redArg(v_t_115_, v_k_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim___boxed(lean_object* v_F_119_, lean_object* v_motive_120_, lean_object* v_ctorIdx_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_k_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim(v_F_119_, v_motive_120_, v_ctorIdx_121_, v_t_122_, v_h_123_, v_k_124_);
lean_dec(v_ctorIdx_121_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_input_elim___redArg(lean_object* v_t_126_, lean_object* v_input_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim___redArg(v_t_126_, v_input_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_input_elim(lean_object* v_F_129_, lean_object* v_motive_130_, lean_object* v_t_131_, lean_object* v_h_132_, lean_object* v_input_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim___redArg(v_t_131_, v_input_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witness_elim___redArg(lean_object* v_t_135_, lean_object* v_witness_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim___redArg(v_t_135_, v_witness_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witness_elim(lean_object* v_F_138_, lean_object* v_motive_139_, lean_object* v_t_140_, lean_object* v_h_141_, lean_object* v_witness_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim___redArg(v_t_140_, v_witness_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_constrain_elim___redArg(lean_object* v_t_144_, lean_object* v_constrain_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim___redArg(v_t_144_, v_constrain_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_constrain_elim(lean_object* v_F_147_, lean_object* v_motive_148_, lean_object* v_t_149_, lean_object* v_h_150_, lean_object* v_constrain_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lp_ark_x2dr1cs_ArkR1CS_Op_ctorElim___redArg(v_t_149_, v_constrain_151_);
return v___x_152_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_unsigned_to_nat(2u);
v___x_160_ = lean_nat_to_int(v___x_159_);
return v___x_160_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = lean_unsigned_to_nat(1u);
v___x_162_ = lean_nat_to_int(v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg(lean_object* v_inst_175_, lean_object* v_x_176_, lean_object* v_prec_177_){
_start:
{
switch(lean_obj_tag(v_x_176_))
{
case 0:
{
lean_object* v_val_178_; lean_object* v___y_180_; lean_object* v___x_189_; uint8_t v___x_190_; 
v_val_178_ = lean_ctor_get(v_x_176_, 0);
lean_inc(v_val_178_);
lean_dec_ref_known(v_x_176_, 1);
v___x_189_ = lean_unsigned_to_nat(1024u);
v___x_190_ = lean_nat_dec_le(v___x_189_, v_prec_177_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; 
v___x_191_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3, &lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3);
v___y_180_ = v___x_191_;
goto v___jp_179_;
}
else
{
lean_object* v___x_192_; 
v___x_192_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4, &lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4);
v___y_180_ = v___x_192_;
goto v___jp_179_;
}
v___jp_179_:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_181_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__2));
v___x_182_ = lean_unsigned_to_nat(1024u);
v___x_183_ = lean_apply_2(v_inst_175_, v_val_178_, v___x_182_);
v___x_184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_181_);
lean_ctor_set(v___x_184_, 1, v___x_183_);
lean_inc(v___y_180_);
v___x_185_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_185_, 0, v___y_180_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
v___x_186_ = 0;
v___x_187_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_187_, 0, v___x_185_);
lean_ctor_set_uint8(v___x_187_, sizeof(void*)*1, v___x_186_);
v___x_188_ = l_Repr_addAppParen(v___x_187_, v_prec_177_);
return v___x_188_;
}
}
case 1:
{
lean_object* v_val_193_; lean_object* v___y_195_; lean_object* v___x_204_; uint8_t v___x_205_; 
v_val_193_ = lean_ctor_get(v_x_176_, 0);
lean_inc(v_val_193_);
lean_dec_ref_known(v_x_176_, 1);
v___x_204_ = lean_unsigned_to_nat(1024u);
v___x_205_ = lean_nat_dec_le(v___x_204_, v_prec_177_);
if (v___x_205_ == 0)
{
lean_object* v___x_206_; 
v___x_206_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3, &lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3);
v___y_195_ = v___x_206_;
goto v___jp_194_;
}
else
{
lean_object* v___x_207_; 
v___x_207_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4, &lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4);
v___y_195_ = v___x_207_;
goto v___jp_194_;
}
v___jp_194_:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_196_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__7));
v___x_197_ = lean_unsigned_to_nat(1024u);
v___x_198_ = lean_apply_2(v_inst_175_, v_val_193_, v___x_197_);
v___x_199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_196_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
lean_inc(v___y_195_);
v___x_200_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_200_, 0, v___y_195_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = 0;
v___x_202_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set_uint8(v___x_202_, sizeof(void*)*1, v___x_201_);
v___x_203_ = l_Repr_addAppParen(v___x_202_, v_prec_177_);
return v___x_203_;
}
}
default: 
{
lean_object* v_k_208_; lean_object* v___y_210_; lean_object* v___x_218_; uint8_t v___x_219_; 
v_k_208_ = lean_ctor_get(v_x_176_, 0);
lean_inc_ref(v_k_208_);
lean_dec_ref_known(v_x_176_, 1);
v___x_218_ = lean_unsigned_to_nat(1024u);
v___x_219_ = lean_nat_dec_le(v___x_218_, v_prec_177_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3, &lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__3);
v___y_210_ = v___x_220_;
goto v___jp_209_;
}
else
{
lean_object* v___x_221_; 
v___x_221_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4, &lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__4);
v___y_210_ = v___x_221_;
goto v___jp_209_;
}
v___jp_209_:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_211_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___closed__10));
v___x_212_ = lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg(v_inst_175_, v_k_208_);
v___x_213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_211_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
lean_inc(v___y_210_);
v___x_214_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_214_, 0, v___y_210_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = 0;
v___x_216_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*1, v___x_215_);
v___x_217_ = l_Repr_addAppParen(v___x_216_, v_prec_177_);
return v___x_217_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg___boxed(lean_object* v_inst_222_, lean_object* v_x_223_, lean_object* v_prec_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg(v_inst_222_, v_x_223_, v_prec_224_);
lean_dec(v_prec_224_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr(lean_object* v_F_226_, lean_object* v_inst_227_, lean_object* v_x_228_, lean_object* v_prec_229_){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___redArg(v_inst_227_, v_x_228_, v_prec_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___boxed(lean_object* v_F_231_, lean_object* v_inst_232_, lean_object* v_x_233_, lean_object* v_prec_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr(v_F_231_, v_inst_232_, v_x_233_, v_prec_234_);
lean_dec(v_prec_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp___redArg(lean_object* v_inst_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___boxed), 4, 2);
lean_closure_set(v___x_237_, 0, lean_box(0));
lean_closure_set(v___x_237_, 1, v_inst_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprOp(lean_object* v_F_238_, lean_object* v_inst_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_instReprOp_repr___boxed), 4, 2);
lean_closure_set(v___x_240_, 0, lean_box(0));
lean_closure_set(v___x_240_, 1, v_inst_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___redArg(lean_object* v_x_241_){
_start:
{
if (lean_obj_tag(v_x_241_) == 0)
{
lean_object* v___x_242_; 
v___x_242_ = lean_unsigned_to_nat(0u);
return v___x_242_;
}
else
{
lean_object* v_head_243_; 
v_head_243_ = lean_ctor_get(v_x_241_, 0);
if (lean_obj_tag(v_head_243_) == 0)
{
lean_object* v_tail_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v_tail_244_ = lean_ctor_get(v_x_241_, 1);
v___x_245_ = lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___redArg(v_tail_244_);
v___x_246_ = lean_unsigned_to_nat(1u);
v___x_247_ = lean_nat_add(v___x_245_, v___x_246_);
lean_dec(v___x_245_);
return v___x_247_;
}
else
{
lean_object* v_tail_248_; 
v_tail_248_ = lean_ctor_get(v_x_241_, 1);
v_x_241_ = v_tail_248_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___redArg___boxed(lean_object* v_x_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___redArg(v_x_250_);
lean_dec(v_x_250_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_inputCount(lean_object* v_F_252_, lean_object* v_x_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___redArg(v_x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___boxed(lean_object* v_F_255_, lean_object* v_x_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = lp_ark_x2dr1cs_ArkR1CS_Op_inputCount(v_F_255_, v_x_256_);
lean_dec(v_x_256_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___redArg(lean_object* v_x_258_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
lean_object* v___x_259_; 
v___x_259_ = lean_unsigned_to_nat(0u);
return v___x_259_;
}
else
{
lean_object* v_head_260_; 
v_head_260_ = lean_ctor_get(v_x_258_, 0);
if (lean_obj_tag(v_head_260_) == 1)
{
lean_object* v_tail_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v_tail_261_ = lean_ctor_get(v_x_258_, 1);
v___x_262_ = lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___redArg(v_tail_261_);
v___x_263_ = lean_unsigned_to_nat(1u);
v___x_264_ = lean_nat_add(v___x_262_, v___x_263_);
lean_dec(v___x_262_);
return v___x_264_;
}
else
{
lean_object* v_tail_265_; 
v_tail_265_ = lean_ctor_get(v_x_258_, 1);
v_x_258_ = v_tail_265_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___redArg___boxed(lean_object* v_x_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___redArg(v_x_267_);
lean_dec(v_x_267_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount(lean_object* v_F_269_, lean_object* v_x_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___redArg(v_x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___boxed(lean_object* v_F_272_, lean_object* v_x_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount(v_F_272_, v_x_273_);
lean_dec(v_x_273_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_constraints___redArg(lean_object* v_x_275_){
_start:
{
if (lean_obj_tag(v_x_275_) == 0)
{
lean_object* v___x_276_; 
v___x_276_ = lean_box(0);
return v___x_276_;
}
else
{
lean_object* v_head_277_; 
v_head_277_ = lean_ctor_get(v_x_275_, 0);
if (lean_obj_tag(v_head_277_) == 2)
{
lean_object* v_tail_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_287_; 
lean_inc_ref(v_head_277_);
v_tail_278_ = lean_ctor_get(v_x_275_, 1);
v_isSharedCheck_287_ = !lean_is_exclusive(v_x_275_);
if (v_isSharedCheck_287_ == 0)
{
lean_object* v_unused_288_; 
v_unused_288_ = lean_ctor_get(v_x_275_, 0);
lean_dec(v_unused_288_);
v___x_280_ = v_x_275_;
v_isShared_281_ = v_isSharedCheck_287_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_tail_278_);
lean_dec(v_x_275_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_287_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v_k_282_; lean_object* v___x_283_; lean_object* v___x_285_; 
v_k_282_ = lean_ctor_get(v_head_277_, 0);
lean_inc_ref(v_k_282_);
lean_dec_ref_known(v_head_277_, 1);
v___x_283_ = lp_ark_x2dr1cs_ArkR1CS_Op_constraints___redArg(v_tail_278_);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 1, v___x_283_);
lean_ctor_set(v___x_280_, 0, v_k_282_);
v___x_285_ = v___x_280_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_k_282_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v___x_283_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
else
{
lean_object* v_tail_289_; 
v_tail_289_ = lean_ctor_get(v_x_275_, 1);
lean_inc(v_tail_289_);
lean_dec_ref_known(v_x_275_, 2);
v_x_275_ = v_tail_289_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Op_constraints(lean_object* v_F_291_, lean_object* v_x_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lp_ark_x2dr1cs_ArkR1CS_Op_constraints___redArg(v_x_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_Relations_ConstraintSystem_0__ArkR1CS_Op_inputCount_match__1_splitter___redArg(lean_object* v_x_294_, lean_object* v_h__1_295_, lean_object* v_h__2_296_, lean_object* v_h__3_297_, lean_object* v_h__4_298_){
_start:
{
if (lean_obj_tag(v_x_294_) == 0)
{
lean_object* v___x_299_; lean_object* v___x_300_; 
lean_dec(v_h__4_298_);
lean_dec(v_h__3_297_);
lean_dec(v_h__2_296_);
v___x_299_ = lean_box(0);
v___x_300_ = lean_apply_1(v_h__1_295_, v___x_299_);
return v___x_300_;
}
else
{
lean_object* v_head_301_; 
lean_dec(v_h__1_295_);
v_head_301_ = lean_ctor_get(v_x_294_, 0);
lean_inc(v_head_301_);
switch(lean_obj_tag(v_head_301_))
{
case 0:
{
lean_object* v_tail_302_; lean_object* v_val_303_; lean_object* v___x_304_; 
lean_dec(v_h__4_298_);
lean_dec(v_h__3_297_);
v_tail_302_ = lean_ctor_get(v_x_294_, 1);
lean_inc(v_tail_302_);
lean_dec_ref_known(v_x_294_, 2);
v_val_303_ = lean_ctor_get(v_head_301_, 0);
lean_inc(v_val_303_);
lean_dec_ref_known(v_head_301_, 1);
v___x_304_ = lean_apply_2(v_h__2_296_, v_val_303_, v_tail_302_);
return v___x_304_;
}
case 1:
{
lean_object* v_tail_305_; lean_object* v_val_306_; lean_object* v___x_307_; 
lean_dec(v_h__4_298_);
lean_dec(v_h__2_296_);
v_tail_305_ = lean_ctor_get(v_x_294_, 1);
lean_inc(v_tail_305_);
lean_dec_ref_known(v_x_294_, 2);
v_val_306_ = lean_ctor_get(v_head_301_, 0);
lean_inc(v_val_306_);
lean_dec_ref_known(v_head_301_, 1);
v___x_307_ = lean_apply_2(v_h__3_297_, v_val_306_, v_tail_305_);
return v___x_307_;
}
default: 
{
lean_object* v_tail_308_; lean_object* v_k_309_; lean_object* v___x_310_; 
lean_dec(v_h__3_297_);
lean_dec(v_h__2_296_);
v_tail_308_ = lean_ctor_get(v_x_294_, 1);
lean_inc(v_tail_308_);
lean_dec_ref_known(v_x_294_, 2);
v_k_309_ = lean_ctor_get(v_head_301_, 0);
lean_inc_ref(v_k_309_);
lean_dec_ref_known(v_head_301_, 1);
v___x_310_ = lean_apply_2(v_h__4_298_, v_k_309_, v_tail_308_);
return v___x_310_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_Relations_ConstraintSystem_0__ArkR1CS_Op_inputCount_match__1_splitter(lean_object* v_F_311_, lean_object* v_motive_312_, lean_object* v_x_313_, lean_object* v_h__1_314_, lean_object* v_h__2_315_, lean_object* v_h__3_316_, lean_object* v_h__4_317_){
_start:
{
if (lean_obj_tag(v_x_313_) == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; 
lean_dec(v_h__4_317_);
lean_dec(v_h__3_316_);
lean_dec(v_h__2_315_);
v___x_318_ = lean_box(0);
v___x_319_ = lean_apply_1(v_h__1_314_, v___x_318_);
return v___x_319_;
}
else
{
lean_object* v_head_320_; 
lean_dec(v_h__1_314_);
v_head_320_ = lean_ctor_get(v_x_313_, 0);
lean_inc(v_head_320_);
switch(lean_obj_tag(v_head_320_))
{
case 0:
{
lean_object* v_tail_321_; lean_object* v_val_322_; lean_object* v___x_323_; 
lean_dec(v_h__4_317_);
lean_dec(v_h__3_316_);
v_tail_321_ = lean_ctor_get(v_x_313_, 1);
lean_inc(v_tail_321_);
lean_dec_ref_known(v_x_313_, 2);
v_val_322_ = lean_ctor_get(v_head_320_, 0);
lean_inc(v_val_322_);
lean_dec_ref_known(v_head_320_, 1);
v___x_323_ = lean_apply_2(v_h__2_315_, v_val_322_, v_tail_321_);
return v___x_323_;
}
case 1:
{
lean_object* v_tail_324_; lean_object* v_val_325_; lean_object* v___x_326_; 
lean_dec(v_h__4_317_);
lean_dec(v_h__2_315_);
v_tail_324_ = lean_ctor_get(v_x_313_, 1);
lean_inc(v_tail_324_);
lean_dec_ref_known(v_x_313_, 2);
v_val_325_ = lean_ctor_get(v_head_320_, 0);
lean_inc(v_val_325_);
lean_dec_ref_known(v_head_320_, 1);
v___x_326_ = lean_apply_2(v_h__3_316_, v_val_325_, v_tail_324_);
return v___x_326_;
}
default: 
{
lean_object* v_tail_327_; lean_object* v_k_328_; lean_object* v___x_329_; 
lean_dec(v_h__3_316_);
lean_dec(v_h__2_315_);
v_tail_327_ = lean_ctor_get(v_x_313_, 1);
lean_inc(v_tail_327_);
lean_dec_ref_known(v_x_313_, 2);
v_k_328_ = lean_ctor_get(v_head_320_, 0);
lean_inc_ref(v_k_328_);
lean_dec_ref_known(v_head_320_, 1);
v___x_329_ = lean_apply_2(v_h__4_317_, v_k_328_, v_tail_327_);
return v___x_329_;
}
}
}
}
}
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_instDecidableEqCounters_decEq(lean_object* v_x_330_, lean_object* v_x_331_){
_start:
{
lean_object* v_num__instance__variables_332_; lean_object* v_num__witness__variables_333_; lean_object* v_num__instance__variables_334_; lean_object* v_num__witness__variables_335_; uint8_t v___x_336_; 
v_num__instance__variables_332_ = lean_ctor_get(v_x_330_, 0);
v_num__witness__variables_333_ = lean_ctor_get(v_x_330_, 1);
v_num__instance__variables_334_ = lean_ctor_get(v_x_331_, 0);
v_num__witness__variables_335_ = lean_ctor_get(v_x_331_, 1);
v___x_336_ = lean_nat_dec_eq(v_num__instance__variables_332_, v_num__instance__variables_334_);
if (v___x_336_ == 0)
{
return v___x_336_;
}
else
{
uint8_t v___x_337_; 
v___x_337_ = lean_nat_dec_eq(v_num__witness__variables_333_, v_num__witness__variables_335_);
return v___x_337_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instDecidableEqCounters_decEq___boxed(lean_object* v_x_338_, lean_object* v_x_339_){
_start:
{
uint8_t v_res_340_; lean_object* v_r_341_; 
v_res_340_ = lp_ark_x2dr1cs_ArkR1CS_instDecidableEqCounters_decEq(v_x_338_, v_x_339_);
lean_dec_ref(v_x_339_);
lean_dec_ref(v_x_338_);
v_r_341_ = lean_box(v_res_340_);
return v_r_341_;
}
}
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_instDecidableEqCounters(lean_object* v_x_342_, lean_object* v_x_343_){
_start:
{
uint8_t v___x_344_; 
v___x_344_ = lp_ark_x2dr1cs_ArkR1CS_instDecidableEqCounters_decEq(v_x_342_, v_x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instDecidableEqCounters___boxed(lean_object* v_x_345_, lean_object* v_x_346_){
_start:
{
uint8_t v_res_347_; lean_object* v_r_348_; 
v_res_347_ = lp_ark_x2dr1cs_ArkR1CS_instDecidableEqCounters(v_x_345_, v_x_346_);
lean_dec_ref(v_x_346_);
lean_dec_ref(v_x_345_);
v_r_348_ = lean_box(v_res_347_);
return v_r_348_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_unsigned_to_nat(26u);
v___x_359_ = lean_nat_to_int(v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = lean_unsigned_to_nat(25u);
v___x_364_ = lean_nat_to_int(v___x_363_);
return v___x_364_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__17, &lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__17_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__17);
v___x_366_ = lean_nat_to_int(v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg(lean_object* v_x_367_){
_start:
{
lean_object* v_num__instance__variables_368_; lean_object* v_num__witness__variables_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_404_; 
v_num__instance__variables_368_ = lean_ctor_get(v_x_367_, 0);
v_num__witness__variables_369_ = lean_ctor_get(v_x_367_, 1);
v_isSharedCheck_404_ = !lean_is_exclusive(v_x_367_);
if (v_isSharedCheck_404_ == 0)
{
v___x_371_ = v_x_367_;
v_isShared_372_ = v_isSharedCheck_404_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_num__witness__variables_369_);
lean_inc(v_num__instance__variables_368_);
lean_dec(v_x_367_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_404_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_379_; 
v___x_373_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__7));
v___x_374_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__3));
v___x_375_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__4, &lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__4_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__4);
v___x_376_ = l_Nat_reprFast(v_num__instance__variables_368_);
v___x_377_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
if (v_isShared_372_ == 0)
{
lean_ctor_set_tag(v___x_371_, 4);
lean_ctor_set(v___x_371_, 1, v___x_377_);
lean_ctor_set(v___x_371_, 0, v___x_375_);
v___x_379_ = v___x_371_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v___x_377_);
v___x_379_ = v_reuseFailAlloc_403_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
uint8_t v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_380_ = 0;
v___x_381_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_381_, 0, v___x_379_);
lean_ctor_set_uint8(v___x_381_, sizeof(void*)*1, v___x_380_);
v___x_382_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_374_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
v___x_383_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__11));
v___x_384_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_382_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
v___x_385_ = lean_box(1);
v___x_386_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__6));
v___x_388_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
lean_ctor_set(v___x_389_, 1, v___x_373_);
v___x_390_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__7, &lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__7_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__7);
v___x_391_ = l_Nat_reprFast(v_num__witness__variables_369_);
v___x_392_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
v___x_393_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_390_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
v___x_394_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_394_, 0, v___x_393_);
lean_ctor_set_uint8(v___x_394_, sizeof(void*)*1, v___x_380_);
v___x_395_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_389_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__8, &lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__8_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg___closed__8);
v___x_397_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__19));
v___x_398_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
lean_ctor_set(v___x_398_, 1, v___x_395_);
v___x_399_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprConstraint_repr___redArg___closed__20));
v___x_400_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_396_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_402_, 0, v___x_401_);
lean_ctor_set_uint8(v___x_402_, sizeof(void*)*1, v___x_380_);
return v___x_402_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr(lean_object* v_x_405_, lean_object* v_prec_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___redArg(v_x_405_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr___boxed(lean_object* v_x_408_, lean_object* v_prec_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = lp_ark_x2dr1cs_ArkR1CS_instReprCounters_repr(v_x_408_, v_prec_409_);
lean_dec(v_prec_409_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Counters_advance___redArg(lean_object* v_c_417_, lean_object* v_ops_418_){
_start:
{
lean_object* v_num__instance__variables_419_; lean_object* v_num__witness__variables_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_431_; 
v_num__instance__variables_419_ = lean_ctor_get(v_c_417_, 0);
v_num__witness__variables_420_ = lean_ctor_get(v_c_417_, 1);
v_isSharedCheck_431_ = !lean_is_exclusive(v_c_417_);
if (v_isSharedCheck_431_ == 0)
{
v___x_422_ = v_c_417_;
v_isShared_423_ = v_isSharedCheck_431_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_num__witness__variables_420_);
lean_inc(v_num__instance__variables_419_);
lean_dec(v_c_417_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_431_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_424_ = lp_ark_x2dr1cs_ArkR1CS_Op_inputCount___redArg(v_ops_418_);
v___x_425_ = lean_nat_add(v_num__instance__variables_419_, v___x_424_);
lean_dec(v___x_424_);
lean_dec(v_num__instance__variables_419_);
v___x_426_ = lp_ark_x2dr1cs_ArkR1CS_Op_witnessCount___redArg(v_ops_418_);
v___x_427_ = lean_nat_add(v_num__witness__variables_420_, v___x_426_);
lean_dec(v___x_426_);
lean_dec(v_num__witness__variables_420_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 1, v___x_427_);
lean_ctor_set(v___x_422_, 0, v___x_425_);
v___x_429_ = v___x_422_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_425_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Counters_advance___redArg___boxed(lean_object* v_c_432_, lean_object* v_ops_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = lp_ark_x2dr1cs_ArkR1CS_Counters_advance___redArg(v_c_432_, v_ops_433_);
lean_dec(v_ops_433_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Counters_advance(lean_object* v_F_435_, lean_object* v_c_436_, lean_object* v_ops_437_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = lp_ark_x2dr1cs_ArkR1CS_Counters_advance___redArg(v_c_436_, v_ops_437_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Counters_advance___boxed(lean_object* v_F_439_, lean_object* v_c_440_, lean_object* v_ops_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = lp_ark_x2dr1cs_ArkR1CS_Counters_advance(v_F_439_, v_c_440_, v_ops_441_);
lean_dec(v_ops_441_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(lean_object* v_x_443_, lean_object* v_x_444_){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_445_ = lean_box(0);
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v_x_443_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed(lean_object* v_x_447_, lean_object* v_x_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(v_x_447_, v_x_448_);
lean_dec_ref(v_x_448_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg(lean_object* v_x_450_){
_start:
{
lean_object* v___f_451_; 
v___f_451_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_451_, 0, v_x_450_);
return v___f_451_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure(lean_object* v_F_452_, lean_object* v_00_u03b1_453_, lean_object* v_x_454_){
_start:
{
lean_object* v___f_455_; 
v___f_455_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_455_, 0, v_x_454_);
return v___f_455_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(lean_object* v_c_456_, lean_object* v_f_457_, lean_object* v_k_458_){
_start:
{
lean_object* v___x_459_; lean_object* v_fst_460_; lean_object* v_snd_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v_fst_464_; lean_object* v_snd_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_473_; 
lean_inc_ref(v_k_458_);
v___x_459_ = lean_apply_1(v_c_456_, v_k_458_);
v_fst_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_fst_460_);
v_snd_461_ = lean_ctor_get(v___x_459_, 1);
lean_inc(v_snd_461_);
lean_dec_ref(v___x_459_);
v___x_462_ = lp_ark_x2dr1cs_ArkR1CS_Counters_advance___redArg(v_k_458_, v_snd_461_);
v___x_463_ = lean_apply_2(v_f_457_, v_fst_460_, v___x_462_);
v_fst_464_ = lean_ctor_get(v___x_463_, 0);
v_snd_465_ = lean_ctor_get(v___x_463_, 1);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_473_ == 0)
{
v___x_467_ = v___x_463_;
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_snd_465_);
lean_inc(v_fst_464_);
lean_dec(v___x_463_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_469_; lean_object* v___x_471_; 
v___x_469_ = l_List_appendTR___redArg(v_snd_461_, v_snd_465_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 1, v___x_469_);
v___x_471_ = v___x_467_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_fst_464_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg(lean_object* v_c_474_, lean_object* v_f_475_){
_start:
{
lean_object* v___f_476_; 
v___f_476_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_476_, 0, v_c_474_);
lean_closure_set(v___f_476_, 1, v_f_475_);
return v___f_476_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_bind(lean_object* v_F_477_, lean_object* v_00_u03b1_478_, lean_object* v_00_u03b2_479_, lean_object* v_c_480_, lean_object* v_f_481_){
_start:
{
lean_object* v___f_482_; 
v___f_482_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_482_, 0, v_c_480_);
lean_closure_set(v___f_482_, 1, v_f_481_);
return v___f_482_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__0(lean_object* v_00_u03b1_484_, lean_object* v_00_u03b2_485_, lean_object* v_f_486_, lean_object* v_x_487_, lean_object* v___y_488_){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__0___closed__0));
v___x_490_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_490_, 0, lean_box(0));
lean_closure_set(v___x_490_, 1, lean_box(0));
lean_closure_set(v___x_490_, 2, lean_box(0));
lean_closure_set(v___x_490_, 3, v___x_489_);
lean_closure_set(v___x_490_, 4, v_f_486_);
v___x_491_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v_x_487_, v___x_490_, v___y_488_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__1(lean_object* v_00_u03b1_492_, lean_object* v_00_u03b2_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_497_ = lean_alloc_closure((void*)(l_Function_const___boxed), 4, 3);
lean_closure_set(v___x_497_, 0, lean_box(0));
lean_closure_set(v___x_497_, 1, lean_box(0));
lean_closure_set(v___x_497_, 2, v___y_494_);
v___x_498_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__0___closed__0));
v___x_499_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_499_, 0, lean_box(0));
lean_closure_set(v___x_499_, 1, lean_box(0));
lean_closure_set(v___x_499_, 2, lean_box(0));
lean_closure_set(v___x_499_, 3, v___x_498_);
lean_closure_set(v___x_499_, 4, v___x_497_);
v___x_500_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v___y_495_, v___x_499_, v___y_496_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__2(lean_object* v_x_501_, lean_object* v_y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_504_ = lean_box(0);
v___x_505_ = lean_apply_1(v_x_501_, v___x_504_);
v___x_506_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__0___closed__0));
v___x_507_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_507_, 0, lean_box(0));
lean_closure_set(v___x_507_, 1, lean_box(0));
lean_closure_set(v___x_507_, 2, lean_box(0));
lean_closure_set(v___x_507_, 3, v___x_506_);
lean_closure_set(v___x_507_, 4, v_y_502_);
v___x_508_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v___x_505_, v___x_507_, v___y_503_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__3(lean_object* v_00_u03b1_509_, lean_object* v_00_u03b2_510_, lean_object* v_f_511_, lean_object* v_x_512_, lean_object* v___y_513_){
_start:
{
lean_object* v___f_514_; lean_object* v___x_515_; 
v___f_514_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__2), 3, 1);
lean_closure_set(v___f_514_, 0, v_x_512_);
v___x_515_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v_f_511_, v___f_514_, v___y_513_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__4(lean_object* v_a_516_, lean_object* v_x_517_, lean_object* v___y_518_){
_start:
{
lean_object* v___x_519_; 
v___x_519_ = lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(v_a_516_, v___y_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__4___boxed(lean_object* v_a_520_, lean_object* v_x_521_, lean_object* v___y_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__4(v_a_520_, v_x_521_, v___y_522_);
lean_dec_ref(v___y_522_);
lean_dec(v_x_521_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__5(lean_object* v_y_524_, lean_object* v_a_525_, lean_object* v___y_526_){
_start:
{
lean_object* v___f_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v___f_527_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_527_, 0, v_a_525_);
v___x_528_ = lean_box(0);
v___x_529_ = lean_apply_1(v_y_524_, v___x_528_);
v___x_530_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v___x_529_, v___f_527_, v___y_526_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__6(lean_object* v_00_u03b1_531_, lean_object* v_00_u03b2_532_, lean_object* v_x_533_, lean_object* v_y_534_, lean_object* v___y_535_){
_start:
{
lean_object* v___f_536_; lean_object* v___x_537_; 
v___f_536_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__5), 3, 1);
lean_closure_set(v___f_536_, 0, v_y_534_);
v___x_537_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v_x_533_, v___f_536_, v___y_535_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__7(lean_object* v_y_538_, lean_object* v_x_539_, lean_object* v___y_540_){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = lean_box(0);
v___x_542_ = lean_apply_2(v_y_538_, v___x_541_, v___y_540_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__7___boxed(lean_object* v_y_543_, lean_object* v_x_544_, lean_object* v___y_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__7(v_y_543_, v_x_544_, v___y_545_);
lean_dec(v_x_544_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__8(lean_object* v_00_u03b1_547_, lean_object* v_00_u03b2_548_, lean_object* v_x_549_, lean_object* v_y_550_, lean_object* v___y_551_){
_start:
{
lean_object* v___f_552_; lean_object* v___x_553_; 
v___f_552_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___lam__7___boxed), 3, 1);
lean_closure_set(v___f_552_, 0, v_y_550_);
v___x_553_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v_x_549_, v___f_552_, v___y_551_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg(){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___closed__9));
return v___x_574_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg___boxed(lean_object* v___dummy_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg();
return v_res_576_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___closed__0(void){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___redArg();
return v___x_577_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_instMonad(lean_object* v_F_578_){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___closed__0, &lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___closed__0_once, _init_lp_ark_x2dr1cs_ArkR1CS_CS_instMonad___closed__0);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__input__variable___redArg___lam__0(lean_object* v_v_580_, lean_object* v_k_581_){
_start:
{
lean_object* v_num__instance__variables_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_593_; 
v_num__instance__variables_582_ = lean_ctor_get(v_k_581_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v_k_581_);
if (v_isSharedCheck_593_ == 0)
{
lean_object* v_unused_594_; 
v_unused_594_ = lean_ctor_get(v_k_581_, 1);
lean_dec(v_unused_594_);
v___x_584_ = v_k_581_;
v_isShared_585_ = v_isSharedCheck_593_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_num__instance__variables_582_);
lean_dec(v_k_581_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_593_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_586_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_586_, 0, v_num__instance__variables_582_);
v___x_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_587_, 0, v_v_580_);
v___x_588_ = lean_box(0);
if (v_isShared_585_ == 0)
{
lean_ctor_set_tag(v___x_584_, 1);
lean_ctor_set(v___x_584_, 1, v___x_588_);
lean_ctor_set(v___x_584_, 0, v___x_587_);
v___x_590_ = v___x_584_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_587_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v___x_588_);
v___x_590_ = v_reuseFailAlloc_592_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
lean_object* v___x_591_; 
v___x_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_586_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
return v___x_591_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__input__variable___redArg(lean_object* v_v_595_){
_start:
{
lean_object* v___f_596_; 
v___f_596_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_new__input__variable___redArg___lam__0), 2, 1);
lean_closure_set(v___f_596_, 0, v_v_595_);
return v___f_596_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__input__variable(lean_object* v_F_597_, lean_object* v_v_598_){
_start:
{
lean_object* v___f_599_; 
v___f_599_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_new__input__variable___redArg___lam__0), 2, 1);
lean_closure_set(v___f_599_, 0, v_v_598_);
return v___f_599_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__witness__variable___redArg___lam__0(lean_object* v_v_600_, lean_object* v_k_601_){
_start:
{
lean_object* v_num__witness__variables_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_613_; 
v_num__witness__variables_602_ = lean_ctor_get(v_k_601_, 1);
v_isSharedCheck_613_ = !lean_is_exclusive(v_k_601_);
if (v_isSharedCheck_613_ == 0)
{
lean_object* v_unused_614_; 
v_unused_614_ = lean_ctor_get(v_k_601_, 0);
lean_dec(v_unused_614_);
v___x_604_ = v_k_601_;
v_isShared_605_ = v_isSharedCheck_613_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_num__witness__variables_602_);
lean_dec(v_k_601_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_613_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_610_; 
v___x_606_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_606_, 0, v_num__witness__variables_602_);
v___x_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_607_, 0, v_v_600_);
v___x_608_ = lean_box(0);
if (v_isShared_605_ == 0)
{
lean_ctor_set_tag(v___x_604_, 1);
lean_ctor_set(v___x_604_, 1, v___x_608_);
lean_ctor_set(v___x_604_, 0, v___x_607_);
v___x_610_ = v___x_604_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v___x_607_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v___x_608_);
v___x_610_ = v_reuseFailAlloc_612_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_611_; 
v___x_611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_606_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
return v___x_611_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__witness__variable___redArg(lean_object* v_v_615_){
_start:
{
lean_object* v___f_616_; 
v___f_616_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_new__witness__variable___redArg___lam__0), 2, 1);
lean_closure_set(v___f_616_, 0, v_v_615_);
return v___f_616_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__witness__variable(lean_object* v_F_617_, lean_object* v_v_618_){
_start:
{
lean_object* v___f_619_; 
v___f_619_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_new__witness__variable___redArg___lam__0), 2, 1);
lean_closure_set(v___f_619_, 0, v_v_618_);
return v___f_619_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__lc___redArg(lean_object* v_lc_620_){
_start:
{
lean_object* v___f_621_; 
v___f_621_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_621_, 0, v_lc_620_);
return v___f_621_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_new__lc(lean_object* v_F_622_, lean_object* v_lc_623_){
_start:
{
lean_object* v___f_624_; 
v___f_624_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_624_, 0, v_lc_623_);
return v___f_624_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0(lean_object* v_a_625_, lean_object* v_b_626_, lean_object* v_c_627_, lean_object* v_x_628_){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_629_ = lean_box(0);
v___x_630_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_630_, 0, v_a_625_);
lean_ctor_set(v___x_630_, 1, v_b_626_);
lean_ctor_set(v___x_630_, 2, v_c_627_);
v___x_631_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
v___x_632_ = lean_box(0);
v___x_633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_631_);
lean_ctor_set(v___x_633_, 1, v___x_632_);
v___x_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_629_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0___boxed(lean_object* v_a_635_, lean_object* v_b_636_, lean_object* v_c_637_, lean_object* v_x_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0(v_a_635_, v_b_636_, v_c_637_, v_x_638_);
lean_dec_ref(v_x_638_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg(lean_object* v_a_640_, lean_object* v_b_641_, lean_object* v_c_642_){
_start:
{
lean_object* v___f_643_; 
v___f_643_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_643_, 0, v_a_640_);
lean_closure_set(v___f_643_, 1, v_b_641_);
lean_closure_set(v___f_643_, 2, v_c_642_);
return v___f_643_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint(lean_object* v_F_644_, lean_object* v_a_645_, lean_object* v_b_646_, lean_object* v_c_647_){
_start:
{
lean_object* v___f_648_; 
v___f_648_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_648_, 0, v_a_645_);
lean_closure_set(v___f_648_, 1, v_b_646_);
lean_closure_set(v___f_648_, 2, v_c_647_);
return v___f_648_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0___redArg(lean_object* v_f_649_, lean_object* v_a_x27_650_, lean_object* v_v_651_, lean_object* v_a_652_){
_start:
{
uint8_t v___x_653_; 
v___x_653_ = lean_nat_dec_eq(v_a_652_, v_a_x27_650_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; 
v___x_654_ = lean_apply_1(v_f_649_, v_a_652_);
return v___x_654_;
}
else
{
lean_dec(v_a_652_);
lean_dec(v_f_649_);
lean_inc(v_v_651_);
return v_v_651_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0___redArg___boxed(lean_object* v_f_655_, lean_object* v_a_x27_656_, lean_object* v_v_657_, lean_object* v_a_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0___redArg(v_f_655_, v_a_x27_656_, v_v_657_, v_a_658_);
lean_dec(v_v_657_);
lean_dec(v_a_x27_656_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0(lean_object* v_00_u03b2_660_, lean_object* v_f_661_, lean_object* v_a_x27_662_, lean_object* v_v_663_, lean_object* v_a_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0___redArg(v_f_661_, v_a_x27_662_, v_v_663_, v_a_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0___boxed(lean_object* v_00_u03b2_666_, lean_object* v_f_667_, lean_object* v_a_x27_668_, lean_object* v_v_669_, lean_object* v_a_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0(v_00_u03b2_666_, v_f_667_, v_a_x27_668_, v_v_669_, v_a_670_);
lean_dec(v_v_669_);
lean_dec(v_a_x27_668_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance___redArg___lam__0(lean_object* v_instance__assignment_672_, lean_object* v_i_673_, lean_object* v_v_674_, lean_object* v___y_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0___redArg(v_instance__assignment_672_, v_i_673_, v_v_674_, v___y_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance___redArg___lam__0___boxed(lean_object* v_instance__assignment_677_, lean_object* v_i_678_, lean_object* v_v_679_, lean_object* v___y_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance___redArg___lam__0(v_instance__assignment_677_, v_i_678_, v_v_679_, v___y_680_);
lean_dec(v_v_679_);
lean_dec(v_i_678_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance___redArg(lean_object* v_a_682_, lean_object* v_i_683_, lean_object* v_v_684_){
_start:
{
lean_object* v_instance__assignment_685_; lean_object* v_witness__assignment_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_694_; 
v_instance__assignment_685_ = lean_ctor_get(v_a_682_, 0);
v_witness__assignment_686_ = lean_ctor_get(v_a_682_, 1);
v_isSharedCheck_694_ = !lean_is_exclusive(v_a_682_);
if (v_isSharedCheck_694_ == 0)
{
v___x_688_ = v_a_682_;
v_isShared_689_ = v_isSharedCheck_694_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_witness__assignment_686_);
lean_inc(v_instance__assignment_685_);
lean_dec(v_a_682_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_694_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___f_690_; lean_object* v___x_692_; 
v___f_690_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_690_, 0, v_instance__assignment_685_);
lean_closure_set(v___f_690_, 1, v_i_683_);
lean_closure_set(v___f_690_, 2, v_v_684_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___f_690_);
v___x_692_ = v___x_688_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___f_690_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_witness__assignment_686_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance(lean_object* v_F_695_, lean_object* v_a_696_, lean_object* v_i_697_, lean_object* v_v_698_){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance___redArg(v_a_696_, v_i_697_, v_v_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness___redArg___lam__0(lean_object* v_witness__assignment_700_, lean_object* v_i_701_, lean_object* v_v_702_, lean_object* v___y_703_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = lp_ark_x2dr1cs_Function_update___at___00ArkR1CS_Assignment_setInstance_spec__0___redArg(v_witness__assignment_700_, v_i_701_, v_v_702_, v___y_703_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness___redArg___lam__0___boxed(lean_object* v_witness__assignment_705_, lean_object* v_i_706_, lean_object* v_v_707_, lean_object* v___y_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness___redArg___lam__0(v_witness__assignment_705_, v_i_706_, v_v_707_, v___y_708_);
lean_dec(v_v_707_);
lean_dec(v_i_706_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness___redArg(lean_object* v_a_710_, lean_object* v_i_711_, lean_object* v_v_712_){
_start:
{
lean_object* v_instance__assignment_713_; lean_object* v_witness__assignment_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_722_; 
v_instance__assignment_713_ = lean_ctor_get(v_a_710_, 0);
v_witness__assignment_714_ = lean_ctor_get(v_a_710_, 1);
v_isSharedCheck_722_ = !lean_is_exclusive(v_a_710_);
if (v_isSharedCheck_722_ == 0)
{
v___x_716_ = v_a_710_;
v_isShared_717_ = v_isSharedCheck_722_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_witness__assignment_714_);
lean_inc(v_instance__assignment_713_);
lean_dec(v_a_710_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_722_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___f_718_; lean_object* v___x_720_; 
v___f_718_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_718_, 0, v_witness__assignment_714_);
lean_closure_set(v___f_718_, 1, v_i_711_);
lean_closure_set(v___f_718_, 2, v_v_712_);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 1, v___f_718_);
v___x_720_ = v___x_716_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_instance__assignment_713_);
lean_ctor_set(v_reuseFailAlloc_721_, 1, v___f_718_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness(lean_object* v_F_723_, lean_object* v_a_724_, lean_object* v_i_725_, lean_object* v_v_726_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness___redArg(v_a_724_, v_i_725_, v_v_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_extend___redArg(lean_object* v_k_728_, lean_object* v_a_729_, lean_object* v_x_730_){
_start:
{
if (lean_obj_tag(v_x_730_) == 0)
{
lean_dec_ref(v_k_728_);
return v_a_729_;
}
else
{
lean_object* v_head_731_; 
v_head_731_ = lean_ctor_get(v_x_730_, 0);
switch(lean_obj_tag(v_head_731_))
{
case 0:
{
lean_object* v_tail_732_; lean_object* v_val_733_; lean_object* v_num__instance__variables_734_; lean_object* v_num__witness__variables_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_746_; 
lean_inc_ref(v_head_731_);
v_tail_732_ = lean_ctor_get(v_x_730_, 1);
lean_inc(v_tail_732_);
lean_dec_ref_known(v_x_730_, 2);
v_val_733_ = lean_ctor_get(v_head_731_, 0);
lean_inc(v_val_733_);
lean_dec_ref_known(v_head_731_, 1);
v_num__instance__variables_734_ = lean_ctor_get(v_k_728_, 0);
v_num__witness__variables_735_ = lean_ctor_get(v_k_728_, 1);
v_isSharedCheck_746_ = !lean_is_exclusive(v_k_728_);
if (v_isSharedCheck_746_ == 0)
{
v___x_737_ = v_k_728_;
v_isShared_738_ = v_isSharedCheck_746_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_num__witness__variables_735_);
lean_inc(v_num__instance__variables_734_);
lean_dec(v_k_728_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_746_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_742_; 
v___x_739_ = lean_unsigned_to_nat(1u);
v___x_740_ = lean_nat_add(v_num__instance__variables_734_, v___x_739_);
if (v_isShared_738_ == 0)
{
lean_ctor_set(v___x_737_, 0, v___x_740_);
v___x_742_ = v___x_737_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_740_);
lean_ctor_set(v_reuseFailAlloc_745_, 1, v_num__witness__variables_735_);
v___x_742_ = v_reuseFailAlloc_745_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
lean_object* v___x_743_; 
v___x_743_ = lp_ark_x2dr1cs_ArkR1CS_Assignment_setInstance___redArg(v_a_729_, v_num__instance__variables_734_, v_val_733_);
v_k_728_ = v___x_742_;
v_a_729_ = v___x_743_;
v_x_730_ = v_tail_732_;
goto _start;
}
}
}
case 1:
{
lean_object* v_tail_747_; lean_object* v_val_748_; lean_object* v_num__instance__variables_749_; lean_object* v_num__witness__variables_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_761_; 
lean_inc_ref(v_head_731_);
v_tail_747_ = lean_ctor_get(v_x_730_, 1);
lean_inc(v_tail_747_);
lean_dec_ref_known(v_x_730_, 2);
v_val_748_ = lean_ctor_get(v_head_731_, 0);
lean_inc(v_val_748_);
lean_dec_ref_known(v_head_731_, 1);
v_num__instance__variables_749_ = lean_ctor_get(v_k_728_, 0);
v_num__witness__variables_750_ = lean_ctor_get(v_k_728_, 1);
v_isSharedCheck_761_ = !lean_is_exclusive(v_k_728_);
if (v_isSharedCheck_761_ == 0)
{
v___x_752_ = v_k_728_;
v_isShared_753_ = v_isSharedCheck_761_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_num__witness__variables_750_);
lean_inc(v_num__instance__variables_749_);
lean_dec(v_k_728_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_761_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; 
v___x_754_ = lean_unsigned_to_nat(1u);
v___x_755_ = lean_nat_add(v_num__witness__variables_750_, v___x_754_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 1, v___x_755_);
v___x_757_ = v___x_752_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_num__instance__variables_749_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v___x_755_);
v___x_757_ = v_reuseFailAlloc_760_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
lean_object* v___x_758_; 
v___x_758_ = lp_ark_x2dr1cs_ArkR1CS_Assignment_setWitness___redArg(v_a_729_, v_num__witness__variables_750_, v_val_748_);
v_k_728_ = v___x_757_;
v_a_729_ = v___x_758_;
v_x_730_ = v_tail_747_;
goto _start;
}
}
}
default: 
{
lean_object* v_tail_762_; 
v_tail_762_ = lean_ctor_get(v_x_730_, 1);
lean_inc(v_tail_762_);
lean_dec_ref_known(v_x_730_, 2);
v_x_730_ = v_tail_762_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_extend(lean_object* v_F_764_, lean_object* v_k_765_, lean_object* v_a_766_, lean_object* v_x_767_){
_start:
{
lean_object* v___x_768_; 
v___x_768_ = lp_ark_x2dr1cs_ArkR1CS_extend___redArg(v_k_765_, v_a_766_, v_x_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg___lam__0(lean_object* v_toZero_769_, lean_object* v_x_770_){
_start:
{
lean_inc(v_toZero_769_);
return v_toZero_769_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg___lam__0___boxed(lean_object* v_toZero_771_, lean_object* v_x_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg___lam__0(v_toZero_771_, v_x_772_);
lean_dec(v_x_772_);
lean_dec(v_toZero_771_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg(lean_object* v_inst_774_, lean_object* v_ops_775_){
_start:
{
lean_object* v___x_776_; lean_object* v_toCommSemiring_777_; lean_object* v___x_778_; lean_object* v_toZero_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_789_; 
v___x_776_ = lp_mathlib_Field_toSemifield___redArg(v_inst_774_);
v_toCommSemiring_777_ = lean_ctor_get(v___x_776_, 0);
lean_inc_ref(v_toCommSemiring_777_);
lean_dec_ref(v___x_776_);
v___x_778_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toCommSemiring_777_);
v_toZero_779_ = lean_ctor_get(v___x_778_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_789_ == 0)
{
lean_object* v_unused_790_; 
v_unused_790_ = lean_ctor_get(v___x_778_, 0);
lean_dec(v_unused_790_);
v___x_781_ = v___x_778_;
v_isShared_782_ = v_isSharedCheck_789_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_toZero_779_);
lean_dec(v___x_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_789_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_783_; lean_object* v___f_784_; lean_object* v___x_786_; 
v___x_783_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_Counters_new));
v___f_784_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_784_, 0, v_toZero_779_);
lean_inc_ref(v___f_784_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 1, v___f_784_);
lean_ctor_set(v___x_781_, 0, v___f_784_);
v___x_786_ = v___x_781_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___f_784_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v___f_784_);
v___x_786_ = v_reuseFailAlloc_788_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_787_; 
v___x_787_ = lp_ark_x2dr1cs_ArkR1CS_extend___redArg(v___x_783_, v___x_786_, v_ops_775_);
return v___x_787_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg___boxed(lean_object* v_inst_791_, lean_object* v_ops_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg(v_inst_791_, v_ops_792_);
lean_dec_ref(v_inst_791_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment(lean_object* v_F_794_, lean_object* v_inst_795_, lean_object* v_ops_796_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg(v_inst_795_, v_ops_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_honestAssignment___boxed(lean_object* v_F_798_, lean_object* v_inst_799_, lean_object* v_ops_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = lp_ark_x2dr1cs_ArkR1CS_honestAssignment(v_F_798_, v_inst_799_, v_ops_800_);
lean_dec_ref(v_inst_799_);
return v_res_801_;
}
}
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg___lam__0(lean_object* v_inst_802_, lean_object* v_a_803_, lean_object* v_toMul_804_, lean_object* v_inst_805_, lean_object* v_k_806_){
_start:
{
lean_object* v_a_807_; lean_object* v_b_808_; lean_object* v_c_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; uint8_t v___x_815_; 
v_a_807_ = lean_ctor_get(v_k_806_, 0);
lean_inc(v_a_807_);
v_b_808_ = lean_ctor_get(v_k_806_, 1);
lean_inc(v_b_808_);
v_c_809_ = lean_ctor_get(v_k_806_, 2);
lean_inc(v_c_809_);
lean_dec_ref(v_k_806_);
lean_inc_ref_n(v_a_803_, 2);
lean_inc_ref_n(v_inst_802_, 2);
v___x_810_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg(v_inst_802_, v_a_803_, v_a_807_);
v___x_811_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg(v_inst_802_, v_a_803_, v_b_808_);
v___x_812_ = lean_apply_2(v_toMul_804_, v___x_810_, v___x_811_);
v___x_813_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg(v_inst_802_, v_a_803_, v_c_809_);
v___x_814_ = lean_apply_2(v_inst_805_, v___x_812_, v___x_813_);
v___x_815_ = lean_unbox(v___x_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg___lam__0___boxed(lean_object* v_inst_816_, lean_object* v_a_817_, lean_object* v_toMul_818_, lean_object* v_inst_819_, lean_object* v_k_820_){
_start:
{
uint8_t v_res_821_; lean_object* v_r_822_; 
v_res_821_ = lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg___lam__0(v_inst_816_, v_a_817_, v_toMul_818_, v_inst_819_, v_k_820_);
v_r_822_ = lean_box(v_res_821_);
return v_r_822_;
}
}
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg(lean_object* v_inst_823_, lean_object* v_inst_824_, lean_object* v_ops_825_){
_start:
{
lean_object* v___x_826_; lean_object* v_toCommSemiring_827_; lean_object* v___x_828_; lean_object* v_toMul_829_; lean_object* v_a_830_; lean_object* v___x_831_; lean_object* v___f_832_; uint8_t v___x_833_; 
v___x_826_ = lp_mathlib_Field_toSemifield___redArg(v_inst_823_);
v_toCommSemiring_827_ = lean_ctor_get(v___x_826_, 0);
lean_inc_ref(v_toCommSemiring_827_);
lean_dec_ref(v___x_826_);
v___x_828_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_827_);
v_toMul_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_toMul_829_);
lean_dec_ref(v___x_828_);
lean_inc(v_ops_825_);
v_a_830_ = lp_ark_x2dr1cs_ArkR1CS_honestAssignment___redArg(v_inst_823_, v_ops_825_);
v___x_831_ = lp_ark_x2dr1cs_ArkR1CS_Op_constraints___redArg(v_ops_825_);
v___f_832_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_832_, 0, v_inst_823_);
lean_closure_set(v___f_832_, 1, v_a_830_);
lean_closure_set(v___f_832_, 2, v_toMul_829_);
lean_closure_set(v___f_832_, 3, v_inst_824_);
v___x_833_ = l_List_all___redArg(v___x_831_, v___f_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg___boxed(lean_object* v_inst_834_, lean_object* v_inst_835_, lean_object* v_ops_836_){
_start:
{
uint8_t v_res_837_; lean_object* v_r_838_; 
v_res_837_ = lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg(v_inst_834_, v_inst_835_, v_ops_836_);
v_r_838_ = lean_box(v_res_837_);
return v_r_838_;
}
}
LEAN_EXPORT uint8_t lp_ark_x2dr1cs_ArkR1CS_isSatisfied(lean_object* v_F_839_, lean_object* v_inst_840_, lean_object* v_inst_841_, lean_object* v_ops_842_){
_start:
{
uint8_t v___x_843_; 
v___x_843_ = lp_ark_x2dr1cs_ArkR1CS_isSatisfied___redArg(v_inst_840_, v_inst_841_, v_ops_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_isSatisfied___boxed(lean_object* v_F_844_, lean_object* v_inst_845_, lean_object* v_inst_846_, lean_object* v_ops_847_){
_start:
{
uint8_t v_res_848_; lean_object* v_r_849_; 
v_res_848_ = lp_ark_x2dr1cs_ArkR1CS_isSatisfied(v_F_844_, v_inst_845_, v_inst_846_, v_ops_847_);
v_r_849_ = lean_box(v_res_848_);
return v_r_849_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ark_x2dr1cs_ArkR1CS_Relations_Variable(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Logic_Function_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ark_x2dr1cs_ArkR1CS_Relations_ConstraintSystem(uint8_t builtin) {
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
res = initialize_ark_x2dr1cs_ArkR1CS_Relations_Variable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Logic_Function_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
