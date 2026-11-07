// Lean compiler output
// Module: ArkR1CS.R1csStd.Fields.Fp
// Imports: public import Init public meta import Init public import ArkR1CS.R1csStd.Eq public import Mathlib.Tactic.LinearCombination
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
lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar___redArg(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofTerm___redArg(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_not___redArg(lean_object*, lean_object*);
lean_object* lp_mathlib_Field_toDivisionRing___redArg(lean_object*);
lean_object* lp_mathlib_Ring_toAddGroupWithOne___redArg(lean_object*);
lean_object* lp_mathlib_Field_toSemifield___redArg(lean_object*);
lean_object* lp_mathlib_Semifield_toCommGroupWithZero___redArg(lean_object*);
lean_object* lp_mathlib_CommGroupWithZero_toDivisionCommMonoid___redArg(lean_object*);
lean_object* lp_mathlib_DivInvOneMonoid_toInvOneClass___redArg(lean_object*);
lean_object* lp_mathlib_AddGroupWithOne_toAddGroup___redArg(lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg(lean_object*, uint8_t);
lean_object* lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_new__witness__variable___redArg___lam__0(lean_object*, lean_object*);
lean_object* lp_mathlib_instDistribOfSemiring___redArg(lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Ring_toAddCommGroup___redArg(lean_object*);
lean_object* lp_mathlib_SubNegZeroMonoid_toNegZeroClass___redArg(lean_object*);
lean_object* lp_mathlib_instMulZeroClassOfSemiring___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___boxed(lean_object*, lean_object*);
lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_repr___redArg(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_new__input__variable___redArg___lam__0(lean_object*, lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lp_ark_x2dr1cs_ArkR1CS_Boolean_value___redArg(lean_object*);
lean_object* lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg(lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_instReprVariable_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__0_value;
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprTupleOfRepr___redArg___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__0_value)} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__1 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__1_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__2 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__2_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__3 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__3_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__3_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__4 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__4_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__4_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__5 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__5_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__6 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__6_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__6_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__7 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__7_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__5_value),((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__7_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__8 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__8_value;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__9;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__10 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__10_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__10_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__11 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__11_value;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lc"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__12 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__12_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__12_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__13 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__13_value;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__14;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__15 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__15_value;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__16;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__17;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__2_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__18 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__18_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__15_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__19 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_eval___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_eval(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__constant___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__constant(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__witness___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__witness(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub__constant___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub__constant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul__constant___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul__constant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_double___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_double(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_negate___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_negate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_square___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_square(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_Boolean_value_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_Boolean_value_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_Constant_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_Constant_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_Var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_Var_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ArkR1CS.FpVar.Constant"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__0_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__0_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__1 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__1_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__2 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__2_value;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__3;
static lean_once_cell_t lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__4;
static const lean_string_object lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ArkR1CS.FpVar.Var"};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__5 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__5_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__5_value)}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__6 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__6_value;
static const lean_ctor_object lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__7 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__7_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_eval___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_eval(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_value___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_value___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_value(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_value___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_zero___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_zero___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_zero(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_zero___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_one___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_one(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_constant___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_constant(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__witness___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__witness(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_add___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_add___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_sub___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_sub(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul__scalar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul__scalar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_negate___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_negate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_double___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_double(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_square___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_square(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_add_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_add_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_sub_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_sub_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_instReprFpVar_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_instReprFpVar_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_is__eq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_is__eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___redArg___closed__0 = (const lean_object*)&lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__not__equal___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__not__equal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_instEqGadget___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_instEqGadget(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_conditional__enforce__equal_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_conditional__enforce__equal_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_Boolean_lc_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_Boolean_lc_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_unsigned_to_nat(9u);
v___x_18_ = lean_nat_to_int(v___x_17_);
return v___x_18_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_unsigned_to_nat(6u);
v___x_26_ = lean_nat_to_int(v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__2));
v___x_29_ = lean_string_length(v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__16, &lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__16_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__16);
v___x_31_ = lean_nat_to_int(v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg(lean_object* v_inst_36_, lean_object* v_x_37_){
_start:
{
lean_object* v_value_38_; lean_object* v_lc_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_75_; 
v_value_38_ = lean_ctor_get(v_x_37_, 0);
v_lc_39_ = lean_ctor_get(v_x_37_, 1);
v_isSharedCheck_75_ = !lean_is_exclusive(v_x_37_);
if (v_isSharedCheck_75_ == 0)
{
v___x_41_ = v_x_37_;
v_isShared_42_ = v_isSharedCheck_75_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_lc_39_);
lean_inc(v_value_38_);
lean_dec(v_x_37_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_75_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___f_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_50_; 
v___f_43_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__1));
v___x_44_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__7));
v___x_45_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__8));
v___x_46_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__9, &lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__9_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__9);
v___x_47_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_inst_36_);
v___x_48_ = lean_apply_2(v_inst_36_, v_value_38_, v___x_47_);
if (v_isShared_42_ == 0)
{
lean_ctor_set_tag(v___x_41_, 4);
lean_ctor_set(v___x_41_, 1, v___x_48_);
lean_ctor_set(v___x_41_, 0, v___x_46_);
v___x_50_ = v___x_41_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_46_);
lean_ctor_set(v_reuseFailAlloc_74_, 1, v___x_48_);
v___x_50_ = v_reuseFailAlloc_74_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
uint8_t v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_51_ = 0;
v___x_52_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_52_, 0, v___x_50_);
lean_ctor_set_uint8(v___x_52_, sizeof(void*)*1, v___x_51_);
v___x_53_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_45_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__11));
v___x_55_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_53_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
v___x_56_ = lean_box(1);
v___x_57_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__13));
v___x_59_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___x_44_);
v___x_61_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__14, &lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__14_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__14);
v___x_62_ = lean_alloc_closure((void*)(l_Prod_repr___boxed), 6, 4);
lean_closure_set(v___x_62_, 0, lean_box(0));
lean_closure_set(v___x_62_, 1, lean_box(0));
lean_closure_set(v___x_62_, 2, v_inst_36_);
lean_closure_set(v___x_62_, 3, v___f_43_);
v___x_63_ = l_List_repr___redArg(v___x_62_, v_lc_39_);
v___x_64_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_61_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
v___x_65_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*1, v___x_51_);
v___x_66_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_60_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__17, &lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__17_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__17);
v___x_68_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__18));
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_66_);
v___x_70_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg___closed__19));
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_69_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v___x_72_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_67_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set_uint8(v___x_73_, sizeof(void*)*1, v___x_51_);
return v___x_73_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr(lean_object* v_F_76_, lean_object* v_inst_77_, lean_object* v_x_78_, lean_object* v_prec_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg(v_inst_77_, v_x_78_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___boxed(lean_object* v_F_81_, lean_object* v_inst_82_, lean_object* v_x_83_, lean_object* v_prec_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr(v_F_81_, v_inst_82_, v_x_83_, v_prec_84_);
lean_dec(v_prec_84_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp___redArg(lean_object* v_inst_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___boxed), 4, 2);
lean_closure_set(v___x_87_, 0, lean_box(0));
lean_closure_set(v___x_87_, 1, v_inst_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp(lean_object* v_F_88_, lean_object* v_inst_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___boxed), 4, 2);
lean_closure_set(v___x_90_, 0, lean_box(0));
lean_closure_set(v___x_90_, 1, v_inst_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new___redArg(lean_object* v_value_91_, lean_object* v_lc_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v_value_91_);
lean_ctor_set(v___x_93_, 1, v_lc_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new(lean_object* v_F_94_, lean_object* v_value_95_, lean_object* v_lc_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v_value_95_);
lean_ctor_set(v___x_97_, 1, v_lc_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_eval___redArg(lean_object* v_inst_98_, lean_object* v_a_99_, lean_object* v_x_100_){
_start:
{
lean_object* v_lc_101_; lean_object* v___x_102_; 
v_lc_101_ = lean_ctor_get(v_x_100_, 1);
lean_inc(v_lc_101_);
lean_dec_ref(v_x_100_);
v___x_102_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_eval___redArg(v_inst_98_, v_a_99_, v_lc_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_eval(lean_object* v_F_103_, lean_object* v_inst_104_, lean_object* v_a_105_, lean_object* v_x_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_eval___redArg(v_inst_104_, v_a_105_, v_x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__constant___redArg(lean_object* v_c_108_){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_109_ = lean_box(1);
lean_inc(v_c_108_);
v___x_110_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofTerm___redArg(v_c_108_, v___x_109_);
v___x_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_111_, 0, v_c_108_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__constant(lean_object* v_F_112_, lean_object* v_c_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__constant___redArg(v_c_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input___redArg___lam__0(lean_object* v_inst_115_, lean_object* v_v_116_, lean_object* v_var_117_, lean_object* v___y_118_){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar___redArg(v_inst_115_, v_var_117_);
v___x_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_120_, 0, v_v_116_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(v___x_120_, v___y_118_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input___redArg___lam__0___boxed(lean_object* v_inst_122_, lean_object* v_v_123_, lean_object* v_var_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input___redArg___lam__0(v_inst_122_, v_v_123_, v_var_124_, v___y_125_);
lean_dec_ref(v___y_125_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input___redArg(lean_object* v_inst_127_, lean_object* v_v_128_){
_start:
{
lean_object* v___f_129_; lean_object* v___f_130_; lean_object* v___f_131_; 
lean_inc(v_v_128_);
v___f_129_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_129_, 0, v_inst_127_);
lean_closure_set(v___f_129_, 1, v_v_128_);
v___f_130_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_new__input__variable___redArg___lam__0), 2, 1);
lean_closure_set(v___f_130_, 0, v_v_128_);
v___f_131_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_131_, 0, v___f_130_);
lean_closure_set(v___f_131_, 1, v___f_129_);
return v___f_131_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input(lean_object* v_F_132_, lean_object* v_inst_133_, lean_object* v_v_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input___redArg(v_inst_133_, v_v_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__witness___redArg(lean_object* v_inst_136_, lean_object* v_v_137_){
_start:
{
lean_object* v___f_138_; lean_object* v___f_139_; lean_object* v___f_140_; 
lean_inc(v_v_137_);
v___f_138_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_138_, 0, v_inst_136_);
lean_closure_set(v___f_138_, 1, v_v_137_);
v___f_139_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_new__witness__variable___redArg___lam__0), 2, 1);
lean_closure_set(v___f_139_, 0, v_v_137_);
v___f_140_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_140_, 0, v___f_139_);
lean_closure_set(v___f_140_, 1, v___f_138_);
return v___f_140_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__witness(lean_object* v_F_141_, lean_object* v_inst_142_, lean_object* v_v_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__witness___redArg(v_inst_142_, v_v_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add___redArg(lean_object* v_inst_145_, lean_object* v_x_146_, lean_object* v_y_147_){
_start:
{
lean_object* v___x_148_; lean_object* v_toCommSemiring_149_; lean_object* v___x_150_; lean_object* v_toAdd_151_; lean_object* v_value_152_; lean_object* v_lc_153_; lean_object* v_value_154_; lean_object* v_lc_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_164_; 
v___x_148_ = lp_mathlib_Field_toSemifield___redArg(v_inst_145_);
v_toCommSemiring_149_ = lean_ctor_get(v___x_148_, 0);
lean_inc_ref(v_toCommSemiring_149_);
lean_dec_ref(v___x_148_);
v___x_150_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_149_);
v_toAdd_151_ = lean_ctor_get(v___x_150_, 1);
lean_inc(v_toAdd_151_);
lean_dec_ref(v___x_150_);
v_value_152_ = lean_ctor_get(v_x_146_, 0);
lean_inc(v_value_152_);
v_lc_153_ = lean_ctor_get(v_x_146_, 1);
lean_inc(v_lc_153_);
lean_dec_ref(v_x_146_);
v_value_154_ = lean_ctor_get(v_y_147_, 0);
v_lc_155_ = lean_ctor_get(v_y_147_, 1);
v_isSharedCheck_164_ = !lean_is_exclusive(v_y_147_);
if (v_isSharedCheck_164_ == 0)
{
v___x_157_ = v_y_147_;
v_isShared_158_ = v_isSharedCheck_164_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_lc_155_);
lean_inc(v_value_154_);
lean_dec(v_y_147_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_164_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_159_ = lean_apply_2(v_toAdd_151_, v_value_152_, v_value_154_);
v___x_160_ = l_List_appendTR___redArg(v_lc_153_, v_lc_155_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 1, v___x_160_);
lean_ctor_set(v___x_157_, 0, v___x_159_);
v___x_162_ = v___x_157_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_159_);
lean_ctor_set(v_reuseFailAlloc_163_, 1, v___x_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add___redArg___boxed(lean_object* v_inst_165_, lean_object* v_x_166_, lean_object* v_y_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add___redArg(v_inst_165_, v_x_166_, v_y_167_);
lean_dec_ref(v_inst_165_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add(lean_object* v_F_169_, lean_object* v_inst_170_, lean_object* v_x_171_, lean_object* v_y_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add___redArg(v_inst_170_, v_x_171_, v_y_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add___boxed(lean_object* v_F_174_, lean_object* v_inst_175_, lean_object* v_x_176_, lean_object* v_y_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add(v_F_174_, v_inst_175_, v_x_176_, v_y_177_);
lean_dec_ref(v_inst_175_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub___redArg(lean_object* v_inst_179_, lean_object* v_x_180_, lean_object* v_y_181_){
_start:
{
lean_object* v___x_182_; lean_object* v_toRing_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v_toSub_186_; lean_object* v_value_187_; lean_object* v_lc_188_; lean_object* v_value_189_; lean_object* v_lc_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_199_; 
lean_inc_ref(v_inst_179_);
v___x_182_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_179_);
v_toRing_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc_ref(v_toRing_183_);
lean_dec_ref(v___x_182_);
v___x_184_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_183_);
v___x_185_ = lp_mathlib_AddGroupWithOne_toAddGroup___redArg(v___x_184_);
lean_dec_ref(v___x_184_);
v_toSub_186_ = lean_ctor_get(v___x_185_, 2);
lean_inc(v_toSub_186_);
lean_dec_ref(v___x_185_);
v_value_187_ = lean_ctor_get(v_x_180_, 0);
lean_inc(v_value_187_);
v_lc_188_ = lean_ctor_get(v_x_180_, 1);
lean_inc(v_lc_188_);
lean_dec_ref(v_x_180_);
v_value_189_ = lean_ctor_get(v_y_181_, 0);
v_lc_190_ = lean_ctor_get(v_y_181_, 1);
v_isSharedCheck_199_ = !lean_is_exclusive(v_y_181_);
if (v_isSharedCheck_199_ == 0)
{
v___x_192_ = v_y_181_;
v_isShared_193_ = v_isSharedCheck_199_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_lc_190_);
lean_inc(v_value_189_);
lean_dec(v_y_181_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_199_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_194_ = lean_apply_2(v_toSub_186_, v_value_187_, v_value_189_);
v___x_195_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff___redArg(v_inst_179_, v_lc_188_, v_lc_190_);
if (v_isShared_193_ == 0)
{
lean_ctor_set(v___x_192_, 1, v___x_195_);
lean_ctor_set(v___x_192_, 0, v___x_194_);
v___x_197_ = v___x_192_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v___x_195_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub(lean_object* v_F_200_, lean_object* v_inst_201_, lean_object* v_x_202_, lean_object* v_y_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub___redArg(v_inst_201_, v_x_202_, v_y_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant___redArg(lean_object* v_inst_205_, lean_object* v_inst_206_, lean_object* v_x_207_, lean_object* v_c_208_){
_start:
{
lean_object* v___x_209_; lean_object* v_toCommSemiring_210_; lean_object* v___x_211_; lean_object* v_toZero_212_; lean_object* v___x_213_; lean_object* v_toAdd_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_209_ = lp_mathlib_Field_toSemifield___redArg(v_inst_205_);
v_toCommSemiring_210_ = lean_ctor_get(v___x_209_, 0);
lean_inc_ref_n(v_toCommSemiring_210_, 2);
lean_dec_ref(v___x_209_);
v___x_211_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toCommSemiring_210_);
v_toZero_212_ = lean_ctor_get(v___x_211_, 1);
lean_inc(v_toZero_212_);
lean_dec_ref(v___x_211_);
v___x_213_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_210_);
v_toAdd_214_ = lean_ctor_get(v___x_213_, 1);
lean_inc(v_toAdd_214_);
lean_dec_ref(v___x_213_);
lean_inc(v_c_208_);
v___x_215_ = lean_apply_2(v_inst_206_, v_c_208_, v_toZero_212_);
v___x_216_ = lean_unbox(v___x_215_);
if (v___x_216_ == 0)
{
lean_object* v_value_217_; lean_object* v_lc_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_229_; 
v_value_217_ = lean_ctor_get(v_x_207_, 0);
v_lc_218_ = lean_ctor_get(v_x_207_, 1);
v_isSharedCheck_229_ = !lean_is_exclusive(v_x_207_);
if (v_isSharedCheck_229_ == 0)
{
v___x_220_ = v_x_207_;
v_isShared_221_ = v_isSharedCheck_229_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_lc_218_);
lean_inc(v_value_217_);
lean_dec(v_x_207_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_229_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_227_; 
lean_inc(v_c_208_);
v___x_222_ = lean_apply_2(v_toAdd_214_, v_value_217_, v_c_208_);
v___x_223_ = lean_box(1);
v___x_224_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofTerm___redArg(v_c_208_, v___x_223_);
v___x_225_ = l_List_appendTR___redArg(v_lc_218_, v___x_224_);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 1, v___x_225_);
lean_ctor_set(v___x_220_, 0, v___x_222_);
v___x_227_ = v___x_220_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_222_);
lean_ctor_set(v_reuseFailAlloc_228_, 1, v___x_225_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
else
{
lean_dec(v_toAdd_214_);
lean_dec(v_c_208_);
return v_x_207_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant___redArg___boxed(lean_object* v_inst_230_, lean_object* v_inst_231_, lean_object* v_x_232_, lean_object* v_c_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant___redArg(v_inst_230_, v_inst_231_, v_x_232_, v_c_233_);
lean_dec_ref(v_inst_230_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant(lean_object* v_F_235_, lean_object* v_inst_236_, lean_object* v_inst_237_, lean_object* v_x_238_, lean_object* v_c_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant___redArg(v_inst_236_, v_inst_237_, v_x_238_, v_c_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant___boxed(lean_object* v_F_241_, lean_object* v_inst_242_, lean_object* v_inst_243_, lean_object* v_x_244_, lean_object* v_c_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant(v_F_241_, v_inst_242_, v_inst_243_, v_x_244_, v_c_245_);
lean_dec_ref(v_inst_242_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub__constant___redArg(lean_object* v_inst_247_, lean_object* v_inst_248_, lean_object* v_x_249_, lean_object* v_c_250_){
_start:
{
lean_object* v___x_251_; lean_object* v_toRing_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v_toNeg_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
lean_inc_ref(v_inst_247_);
v___x_251_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_247_);
v_toRing_252_ = lean_ctor_get(v___x_251_, 0);
lean_inc_ref(v_toRing_252_);
lean_dec_ref(v___x_251_);
v___x_253_ = lp_mathlib_Ring_toAddCommGroup___redArg(v_toRing_252_);
lean_dec_ref(v_toRing_252_);
v___x_254_ = lp_mathlib_SubNegZeroMonoid_toNegZeroClass___redArg(v___x_253_);
lean_dec_ref(v___x_253_);
v_toNeg_255_ = lean_ctor_get(v___x_254_, 1);
lean_inc(v_toNeg_255_);
lean_dec_ref(v___x_254_);
v___x_256_ = lean_apply_1(v_toNeg_255_, v_c_250_);
v___x_257_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant___redArg(v_inst_247_, v_inst_248_, v_x_249_, v___x_256_);
lean_dec_ref(v_inst_247_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub__constant(lean_object* v_F_258_, lean_object* v_inst_259_, lean_object* v_inst_260_, lean_object* v_x_261_, lean_object* v_c_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub__constant___redArg(v_inst_259_, v_inst_260_, v_x_261_, v_c_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul__constant___redArg(lean_object* v_inst_264_, lean_object* v_inst_265_, lean_object* v_x_266_, lean_object* v_c_267_){
_start:
{
lean_object* v___x_268_; lean_object* v_toRing_269_; lean_object* v___x_270_; lean_object* v_toAddMonoidWithOne_271_; lean_object* v_toOne_272_; lean_object* v___x_273_; lean_object* v_toCommSemiring_274_; lean_object* v___x_275_; lean_object* v_toMul_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
lean_inc_ref(v_inst_264_);
v___x_268_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_264_);
v_toRing_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc_ref(v_toRing_269_);
lean_dec_ref(v___x_268_);
v___x_270_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_269_);
v_toAddMonoidWithOne_271_ = lean_ctor_get(v___x_270_, 1);
lean_inc_ref(v_toAddMonoidWithOne_271_);
lean_dec_ref(v___x_270_);
v_toOne_272_ = lean_ctor_get(v_toAddMonoidWithOne_271_, 2);
lean_inc(v_toOne_272_);
lean_dec_ref(v_toAddMonoidWithOne_271_);
v___x_273_ = lp_mathlib_Field_toSemifield___redArg(v_inst_264_);
lean_dec_ref(v_inst_264_);
v_toCommSemiring_274_ = lean_ctor_get(v___x_273_, 0);
lean_inc_ref(v_toCommSemiring_274_);
lean_dec_ref(v___x_273_);
v___x_275_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_274_);
v_toMul_276_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_toMul_276_);
lean_dec_ref(v___x_275_);
lean_inc(v_c_267_);
v___x_277_ = lean_apply_2(v_inst_265_, v_c_267_, v_toOne_272_);
v___x_278_ = lean_unbox(v___x_277_);
if (v___x_278_ == 0)
{
lean_object* v_value_279_; lean_object* v_lc_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_289_; 
v_value_279_ = lean_ctor_get(v_x_266_, 0);
v_lc_280_ = lean_ctor_get(v_x_266_, 1);
v_isSharedCheck_289_ = !lean_is_exclusive(v_x_266_);
if (v_isSharedCheck_289_ == 0)
{
v___x_282_ = v_x_266_;
v_isShared_283_ = v_isSharedCheck_289_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_lc_280_);
lean_inc(v_value_279_);
lean_dec(v_x_266_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_289_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_287_; 
lean_inc(v_toMul_276_);
lean_inc(v_c_267_);
v___x_284_ = lean_apply_2(v_toMul_276_, v_value_279_, v_c_267_);
v___x_285_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar___redArg(v_toMul_276_, v_lc_280_, v_c_267_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 1, v___x_285_);
lean_ctor_set(v___x_282_, 0, v___x_284_);
v___x_287_ = v___x_282_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v___x_284_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v___x_285_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
else
{
lean_dec(v_toMul_276_);
lean_dec(v_c_267_);
return v_x_266_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul__constant(lean_object* v_F_290_, lean_object* v_inst_291_, lean_object* v_inst_292_, lean_object* v_x_293_, lean_object* v_c_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul__constant___redArg(v_inst_291_, v_inst_292_, v_x_293_, v_c_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_double___redArg(lean_object* v_inst_296_, lean_object* v_x_297_){
_start:
{
lean_object* v___x_298_; lean_object* v_toCommSemiring_299_; lean_object* v___x_300_; lean_object* v_toMul_301_; lean_object* v_toAdd_302_; lean_object* v_value_303_; lean_object* v_lc_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_320_; 
v___x_298_ = lp_mathlib_Field_toSemifield___redArg(v_inst_296_);
v_toCommSemiring_299_ = lean_ctor_get(v___x_298_, 0);
lean_inc_ref(v_toCommSemiring_299_);
lean_dec_ref(v___x_298_);
v___x_300_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_299_);
v_toMul_301_ = lean_ctor_get(v___x_300_, 0);
lean_inc(v_toMul_301_);
v_toAdd_302_ = lean_ctor_get(v___x_300_, 1);
lean_inc(v_toAdd_302_);
lean_dec_ref(v___x_300_);
v_value_303_ = lean_ctor_get(v_x_297_, 0);
v_lc_304_ = lean_ctor_get(v_x_297_, 1);
v_isSharedCheck_320_ = !lean_is_exclusive(v_x_297_);
if (v_isSharedCheck_320_ == 0)
{
v___x_306_ = v_x_297_;
v_isShared_307_ = v_isSharedCheck_320_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_lc_304_);
lean_inc(v_value_303_);
lean_dec(v_x_297_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_320_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v_toRing_310_; lean_object* v___x_311_; lean_object* v_toAddMonoidWithOne_312_; lean_object* v_toNatCast_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_318_; 
lean_inc(v_value_303_);
v___x_308_ = lean_apply_2(v_toAdd_302_, v_value_303_, v_value_303_);
v___x_309_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_296_);
v_toRing_310_ = lean_ctor_get(v___x_309_, 0);
lean_inc_ref(v_toRing_310_);
lean_dec_ref(v___x_309_);
v___x_311_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_310_);
v_toAddMonoidWithOne_312_ = lean_ctor_get(v___x_311_, 1);
lean_inc_ref(v_toAddMonoidWithOne_312_);
lean_dec_ref(v___x_311_);
v_toNatCast_313_ = lean_ctor_get(v_toAddMonoidWithOne_312_, 0);
lean_inc(v_toNatCast_313_);
lean_dec_ref(v_toAddMonoidWithOne_312_);
v___x_314_ = lean_unsigned_to_nat(2u);
v___x_315_ = lean_apply_1(v_toNatCast_313_, v___x_314_);
v___x_316_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_mulScalar___redArg(v_toMul_301_, v_lc_304_, v___x_315_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 1, v___x_316_);
lean_ctor_set(v___x_306_, 0, v___x_308_);
v___x_318_ = v___x_306_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_308_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v___x_316_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_double(lean_object* v_F_321_, lean_object* v_inst_322_, lean_object* v_x_323_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_double___redArg(v_inst_322_, v_x_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_negate___redArg(lean_object* v_inst_325_, lean_object* v_x_326_){
_start:
{
lean_object* v___x_327_; lean_object* v_toRing_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v_toNeg_331_; lean_object* v_value_332_; lean_object* v_lc_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_343_; 
lean_inc_ref(v_inst_325_);
v___x_327_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_325_);
v_toRing_328_ = lean_ctor_get(v___x_327_, 0);
lean_inc_ref(v_toRing_328_);
lean_dec_ref(v___x_327_);
v___x_329_ = lp_mathlib_Ring_toAddCommGroup___redArg(v_toRing_328_);
lean_dec_ref(v_toRing_328_);
v___x_330_ = lp_mathlib_SubNegZeroMonoid_toNegZeroClass___redArg(v___x_329_);
lean_dec_ref(v___x_329_);
v_toNeg_331_ = lean_ctor_get(v___x_330_, 1);
lean_inc(v_toNeg_331_);
lean_dec_ref(v___x_330_);
v_value_332_ = lean_ctor_get(v_x_326_, 0);
v_lc_333_ = lean_ctor_get(v_x_326_, 1);
v_isSharedCheck_343_ = !lean_is_exclusive(v_x_326_);
if (v_isSharedCheck_343_ == 0)
{
v___x_335_ = v_x_326_;
v_isShared_336_ = v_isSharedCheck_343_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_lc_333_);
lean_inc(v_value_332_);
lean_dec(v_x_326_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_343_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_337_ = lean_apply_1(v_toNeg_331_, v_value_332_);
v___x_338_ = lean_box(0);
v___x_339_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff___redArg(v_inst_325_, v___x_338_, v_lc_333_);
if (v_isShared_336_ == 0)
{
lean_ctor_set(v___x_335_, 1, v___x_339_);
lean_ctor_set(v___x_335_, 0, v___x_337_);
v___x_341_ = v___x_335_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_337_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v___x_339_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_negate(lean_object* v_F_344_, lean_object* v_inst_345_, lean_object* v_x_346_){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_negate___redArg(v_inst_345_, v_x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg___lam__0(lean_object* v_product_348_, lean_object* v_____r_349_, lean_object* v___y_350_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(v_product_348_, v___y_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg___lam__0___boxed(lean_object* v_product_352_, lean_object* v_____r_353_, lean_object* v___y_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg___lam__0(v_product_352_, v_____r_353_, v___y_354_);
lean_dec_ref(v___y_354_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg___lam__1(lean_object* v_lc_356_, lean_object* v_lc_357_, lean_object* v_product_358_, lean_object* v___y_359_){
_start:
{
lean_object* v_lc_360_; lean_object* v___f_361_; lean_object* v___f_362_; lean_object* v___x_363_; 
v_lc_360_ = lean_ctor_get(v_product_358_, 1);
lean_inc(v_lc_360_);
v___f_361_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_361_, 0, v_product_358_);
v___f_362_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_362_, 0, v_lc_356_);
lean_closure_set(v___f_362_, 1, v_lc_357_);
lean_closure_set(v___f_362_, 2, v_lc_360_);
v___x_363_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v___f_362_, v___f_361_, v___y_359_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg(lean_object* v_inst_364_, lean_object* v_x_365_, lean_object* v_y_366_){
_start:
{
lean_object* v___x_367_; lean_object* v_toCommSemiring_368_; lean_object* v___x_369_; lean_object* v_toMul_370_; lean_object* v_value_371_; lean_object* v_lc_372_; lean_object* v_value_373_; lean_object* v_lc_374_; lean_object* v___f_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___f_378_; 
v___x_367_ = lp_mathlib_Field_toSemifield___redArg(v_inst_364_);
v_toCommSemiring_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc_ref(v_toCommSemiring_368_);
lean_dec_ref(v___x_367_);
v___x_369_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_368_);
v_toMul_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_toMul_370_);
lean_dec_ref(v___x_369_);
v_value_371_ = lean_ctor_get(v_x_365_, 0);
lean_inc(v_value_371_);
v_lc_372_ = lean_ctor_get(v_x_365_, 1);
lean_inc(v_lc_372_);
lean_dec_ref(v_x_365_);
v_value_373_ = lean_ctor_get(v_y_366_, 0);
lean_inc(v_value_373_);
v_lc_374_ = lean_ctor_get(v_y_366_, 1);
lean_inc(v_lc_374_);
lean_dec_ref(v_y_366_);
v___f_375_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg___lam__1), 4, 2);
lean_closure_set(v___f_375_, 0, v_lc_372_);
lean_closure_set(v___f_375_, 1, v_lc_374_);
v___x_376_ = lean_apply_2(v_toMul_370_, v_value_371_, v_value_373_);
v___x_377_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__witness___redArg(v_inst_364_, v___x_376_);
v___f_378_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_378_, 0, v___x_377_);
lean_closure_set(v___f_378_, 1, v___f_375_);
return v___f_378_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul(lean_object* v_F_379_, lean_object* v_inst_380_, lean_object* v_x_381_, lean_object* v_y_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg(v_inst_380_, v_x_381_, v_y_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_square___redArg(lean_object* v_inst_384_, lean_object* v_x_385_){
_start:
{
lean_object* v___x_386_; 
lean_inc_ref(v_x_385_);
v___x_386_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg(v_inst_384_, v_x_385_, v_x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_square(lean_object* v_F_387_, lean_object* v_inst_388_, lean_object* v_x_389_){
_start:
{
lean_object* v___x_390_; 
lean_inc_ref(v_x_389_);
v___x_390_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg(v_inst_388_, v_x_389_, v_x_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg___lam__0(lean_object* v_inv_391_, lean_object* v_____r_392_, lean_object* v___y_393_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(v_inv_391_, v___y_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg___lam__0___boxed(lean_object* v_inv_395_, lean_object* v_____r_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg___lam__0(v_inv_395_, v_____r_396_, v___y_397_);
lean_dec_ref(v___y_397_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg___lam__1(lean_object* v_inst_399_, lean_object* v_lc_400_, lean_object* v_inv_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_lc_403_; lean_object* v___f_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___f_407_; lean_object* v___x_408_; 
v_lc_403_ = lean_ctor_get(v_inv_401_, 1);
lean_inc(v_lc_403_);
v___f_404_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_404_, 0, v_inv_401_);
v___x_405_ = lean_box(1);
v___x_406_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar___redArg(v_inst_399_, v___x_405_);
v___f_407_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_407_, 0, v_lc_400_);
lean_closure_set(v___f_407_, 1, v_lc_403_);
lean_closure_set(v___f_407_, 2, v___x_406_);
v___x_408_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v___f_407_, v___f_404_, v___y_402_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg(lean_object* v_inst_409_, lean_object* v_x_410_){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v_toInv_415_; lean_object* v_value_416_; lean_object* v_lc_417_; lean_object* v___f_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___f_421_; 
v___x_411_ = lp_mathlib_Field_toSemifield___redArg(v_inst_409_);
v___x_412_ = lp_mathlib_Semifield_toCommGroupWithZero___redArg(v___x_411_);
lean_dec_ref(v___x_411_);
v___x_413_ = lp_mathlib_CommGroupWithZero_toDivisionCommMonoid___redArg(v___x_412_);
v___x_414_ = lp_mathlib_DivInvOneMonoid_toInvOneClass___redArg(v___x_413_);
lean_dec_ref(v___x_413_);
v_toInv_415_ = lean_ctor_get(v___x_414_, 1);
lean_inc(v_toInv_415_);
lean_dec_ref(v___x_414_);
v_value_416_ = lean_ctor_get(v_x_410_, 0);
lean_inc(v_value_416_);
v_lc_417_ = lean_ctor_get(v_x_410_, 1);
lean_inc(v_lc_417_);
lean_dec_ref(v_x_410_);
lean_inc_ref(v_inst_409_);
v___f_418_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg___lam__1), 4, 2);
lean_closure_set(v___f_418_, 0, v_inst_409_);
lean_closure_set(v___f_418_, 1, v_lc_417_);
v___x_419_ = lean_apply_1(v_toInv_415_, v_value_416_);
v___x_420_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__witness___redArg(v_inst_409_, v___x_419_);
v___f_421_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_421_, 0, v___x_420_);
lean_closure_set(v___f_421_, 1, v___f_418_);
return v___f_421_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse(lean_object* v_F_422_, lean_object* v_inst_423_, lean_object* v_x_424_){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_inverse___redArg(v_inst_423_, v_x_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__0(lean_object* v___x_426_, lean_object* v_____r_427_, lean_object* v___y_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(v___x_426_, v___y_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__0___boxed(lean_object* v___x_430_, lean_object* v_____r_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__0(v___x_430_, v_____r_431_, v___y_432_);
lean_dec_ref(v___y_432_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__1(lean_object* v_inst_434_, lean_object* v___x_435_, lean_object* v_difference_436_, lean_object* v___f_437_, lean_object* v_____r_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_is__equal_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___f_443_; lean_object* v___x_444_; 
lean_inc_ref(v_inst_434_);
v_is__equal_440_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_not___redArg(v_inst_434_, v___x_435_);
v___x_441_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg(v_inst_434_, v_is__equal_440_);
lean_dec_ref(v_is__equal_440_);
v___x_442_ = lean_box(0);
v___f_443_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_443_, 0, v_difference_436_);
lean_closure_set(v___f_443_, 1, v___x_441_);
lean_closure_set(v___f_443_, 2, v___x_442_);
v___x_444_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v___f_443_, v___f_437_, v___y_439_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__2(lean_object* v_inst_445_, lean_object* v_multiplier_446_, lean_object* v_is__not__equal_447_, lean_object* v_difference_448_, lean_object* v___y_449_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___f_452_; lean_object* v___f_453_; lean_object* v___x_454_; lean_object* v___f_455_; lean_object* v___x_456_; 
lean_inc_ref_n(v_inst_445_, 2);
v___x_450_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_ofVar___redArg(v_inst_445_, v_multiplier_446_);
v___x_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_451_, 0, v_is__not__equal_447_);
lean_inc_ref_n(v___x_451_, 2);
v___f_452_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_452_, 0, v___x_451_);
lean_inc(v_difference_448_);
v___f_453_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__1), 6, 4);
lean_closure_set(v___f_453_, 0, v_inst_445_);
lean_closure_set(v___f_453_, 1, v___x_451_);
lean_closure_set(v___f_453_, 2, v_difference_448_);
lean_closure_set(v___f_453_, 3, v___f_452_);
v___x_454_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg(v_inst_445_, v___x_451_);
lean_dec_ref_known(v___x_451_, 1);
v___f_455_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_455_, 0, v_difference_448_);
lean_closure_set(v___f_455_, 1, v___x_450_);
lean_closure_set(v___f_455_, 2, v___x_454_);
v___x_456_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v___f_455_, v___f_453_, v___y_449_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__3(lean_object* v_inst_457_, lean_object* v_is__not__equal_458_, lean_object* v_lc_459_, lean_object* v_lc_460_, lean_object* v_multiplier_461_, lean_object* v___y_462_){
_start:
{
lean_object* v___f_463_; lean_object* v___x_464_; lean_object* v___f_465_; lean_object* v___x_466_; 
lean_inc_ref(v_inst_457_);
v___f_463_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__2), 5, 3);
lean_closure_set(v___f_463_, 0, v_inst_457_);
lean_closure_set(v___f_463_, 1, v_multiplier_461_);
lean_closure_set(v___f_463_, 2, v_is__not__equal_458_);
v___x_464_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff___redArg(v_inst_457_, v_lc_459_, v_lc_460_);
v___f_465_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_465_, 0, v___x_464_);
v___x_466_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v___f_465_, v___f_463_, v___y_462_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__4(lean_object* v_inst_467_, lean_object* v_lc_468_, lean_object* v_lc_469_, uint8_t v___y_470_, lean_object* v_toOne_471_, lean_object* v_toSub_472_, lean_object* v_value_473_, lean_object* v_value_474_, lean_object* v_toInv_475_, lean_object* v_is__not__equal_476_, lean_object* v___y_477_){
_start:
{
lean_object* v___f_478_; lean_object* v___y_480_; 
v___f_478_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__3), 6, 4);
lean_closure_set(v___f_478_, 0, v_inst_467_);
lean_closure_set(v___f_478_, 1, v_is__not__equal_476_);
lean_closure_set(v___f_478_, 2, v_lc_468_);
lean_closure_set(v___f_478_, 3, v_lc_469_);
if (v___y_470_ == 0)
{
lean_dec(v_toInv_475_);
lean_dec(v_value_474_);
lean_dec(v_value_473_);
lean_dec(v_toSub_472_);
v___y_480_ = v_toOne_471_;
goto v___jp_479_;
}
else
{
lean_object* v___x_483_; lean_object* v___x_484_; 
lean_dec(v_toOne_471_);
v___x_483_ = lean_apply_2(v_toSub_472_, v_value_473_, v_value_474_);
v___x_484_ = lean_apply_1(v_toInv_475_, v___x_483_);
v___y_480_ = v___x_484_;
goto v___jp_479_;
}
v___jp_479_:
{
lean_object* v___f_481_; lean_object* v___x_482_; 
v___f_481_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_new__witness__variable___redArg___lam__0), 2, 1);
lean_closure_set(v___f_481_, 0, v___y_480_);
v___x_482_ = lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0(v___f_481_, v___f_478_, v___y_477_);
return v___x_482_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__4___boxed(lean_object* v_inst_485_, lean_object* v_lc_486_, lean_object* v_lc_487_, lean_object* v___y_488_, lean_object* v_toOne_489_, lean_object* v_toSub_490_, lean_object* v_value_491_, lean_object* v_value_492_, lean_object* v_toInv_493_, lean_object* v_is__not__equal_494_, lean_object* v___y_495_){
_start:
{
uint8_t v___y_692__boxed_496_; lean_object* v_res_497_; 
v___y_692__boxed_496_ = lean_unbox(v___y_488_);
v_res_497_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__4(v_inst_485_, v_lc_486_, v_lc_487_, v___y_692__boxed_496_, v_toOne_489_, v_toSub_490_, v_value_491_, v_value_492_, v_toInv_493_, v_is__not__equal_494_, v___y_495_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg(lean_object* v_inst_498_, lean_object* v_inst_499_, lean_object* v_x_500_, lean_object* v_y_501_){
_start:
{
lean_object* v_value_502_; lean_object* v_lc_503_; lean_object* v_value_504_; lean_object* v_lc_505_; uint8_t v___y_507_; lean_object* v___x_524_; uint8_t v___x_525_; 
v_value_502_ = lean_ctor_get(v_x_500_, 0);
lean_inc_n(v_value_502_, 2);
v_lc_503_ = lean_ctor_get(v_x_500_, 1);
lean_inc(v_lc_503_);
lean_dec_ref(v_x_500_);
v_value_504_ = lean_ctor_get(v_y_501_, 0);
lean_inc_n(v_value_504_, 2);
v_lc_505_ = lean_ctor_get(v_y_501_, 1);
lean_inc(v_lc_505_);
lean_dec_ref(v_y_501_);
v___x_524_ = lean_apply_2(v_inst_499_, v_value_502_, v_value_504_);
v___x_525_ = lean_unbox(v___x_524_);
if (v___x_525_ == 0)
{
uint8_t v___x_526_; 
v___x_526_ = 1;
v___y_507_ = v___x_526_;
goto v___jp_506_;
}
else
{
uint8_t v___x_527_; 
v___x_527_ = 0;
v___y_507_ = v___x_527_;
goto v___jp_506_;
}
v___jp_506_:
{
lean_object* v___x_508_; lean_object* v_toRing_509_; lean_object* v___x_510_; lean_object* v_toAddMonoidWithOne_511_; lean_object* v_toOne_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v_toInv_517_; lean_object* v___x_518_; lean_object* v_toSub_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___f_522_; lean_object* v___f_523_; 
lean_inc_ref_n(v_inst_498_, 2);
v___x_508_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_498_);
v_toRing_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc_ref(v_toRing_509_);
lean_dec_ref(v___x_508_);
v___x_510_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_509_);
v_toAddMonoidWithOne_511_ = lean_ctor_get(v___x_510_, 1);
lean_inc_ref(v_toAddMonoidWithOne_511_);
v_toOne_512_ = lean_ctor_get(v_toAddMonoidWithOne_511_, 2);
lean_inc(v_toOne_512_);
lean_dec_ref(v_toAddMonoidWithOne_511_);
v___x_513_ = lp_mathlib_Field_toSemifield___redArg(v_inst_498_);
v___x_514_ = lp_mathlib_Semifield_toCommGroupWithZero___redArg(v___x_513_);
lean_dec_ref(v___x_513_);
v___x_515_ = lp_mathlib_CommGroupWithZero_toDivisionCommMonoid___redArg(v___x_514_);
v___x_516_ = lp_mathlib_DivInvOneMonoid_toInvOneClass___redArg(v___x_515_);
lean_dec_ref(v___x_515_);
v_toInv_517_ = lean_ctor_get(v___x_516_, 1);
lean_inc(v_toInv_517_);
lean_dec_ref(v___x_516_);
v___x_518_ = lp_mathlib_AddGroupWithOne_toAddGroup___redArg(v___x_510_);
lean_dec_ref(v___x_510_);
v_toSub_519_ = lean_ctor_get(v___x_518_, 2);
lean_inc(v_toSub_519_);
lean_dec_ref(v___x_518_);
v___x_520_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedBool_new__witness__without__booleanity__check___redArg(v_inst_498_, v___y_507_);
v___x_521_ = lean_box(v___y_507_);
v___f_522_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg___lam__4___boxed), 11, 9);
lean_closure_set(v___f_522_, 0, v_inst_498_);
lean_closure_set(v___f_522_, 1, v_lc_503_);
lean_closure_set(v___f_522_, 2, v_lc_505_);
lean_closure_set(v___f_522_, 3, v___x_521_);
lean_closure_set(v___f_522_, 4, v_toOne_512_);
lean_closure_set(v___f_522_, 5, v_toSub_519_);
lean_closure_set(v___f_522_, 6, v_value_502_);
lean_closure_set(v___f_522_, 7, v_value_504_);
lean_closure_set(v___f_522_, 8, v_toInv_517_);
v___f_523_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_523_, 0, v___x_520_);
lean_closure_set(v___f_523_, 1, v___f_522_);
return v___f_523_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq(lean_object* v_F_528_, lean_object* v_inst_529_, lean_object* v_inst_530_, lean_object* v_x_531_, lean_object* v_y_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg(v_inst_529_, v_inst_530_, v_x_531_, v_y_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg___lam__0(lean_object* v_inst_534_, lean_object* v_b_535_, lean_object* v___y_536_){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_not___redArg(v_inst_534_, v_b_535_);
v___x_538_ = lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(v___x_537_, v___y_536_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg___lam__0___boxed(lean_object* v_inst_539_, lean_object* v_b_540_, lean_object* v___y_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg___lam__0(v_inst_539_, v_b_540_, v___y_541_);
lean_dec_ref(v___y_541_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg(lean_object* v_inst_543_, lean_object* v_inst_544_, lean_object* v_x_545_, lean_object* v_y_546_){
_start:
{
lean_object* v___f_547_; lean_object* v___x_548_; lean_object* v___f_549_; 
lean_inc_ref(v_inst_543_);
v___f_547_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_547_, 0, v_inst_543_);
v___x_548_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__neq___redArg(v_inst_543_, v_inst_544_, v_x_545_, v_y_546_);
v___f_549_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_549_, 0, v___x_548_);
lean_closure_set(v___f_549_, 1, v___f_547_);
return v___f_549_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq(lean_object* v_F_550_, lean_object* v_inst_551_, lean_object* v_inst_552_, lean_object* v_x_553_, lean_object* v_y_554_){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg(v_inst_551_, v_inst_552_, v_x_553_, v_y_554_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal___redArg(lean_object* v_inst_556_, lean_object* v_x_557_, lean_object* v_y_558_, lean_object* v_should__enforce_559_){
_start:
{
lean_object* v_lc_560_; lean_object* v_lc_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___f_565_; 
v_lc_560_ = lean_ctor_get(v_x_557_, 1);
lean_inc(v_lc_560_);
lean_dec_ref(v_x_557_);
v_lc_561_ = lean_ctor_get(v_y_558_, 1);
lean_inc(v_lc_561_);
lean_dec_ref(v_y_558_);
lean_inc_ref(v_inst_556_);
v___x_562_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff___redArg(v_inst_556_, v_lc_560_, v_lc_561_);
v___x_563_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg(v_inst_556_, v_should__enforce_559_);
v___x_564_ = lean_box(0);
v___f_565_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_565_, 0, v___x_562_);
lean_closure_set(v___f_565_, 1, v___x_563_);
lean_closure_set(v___f_565_, 2, v___x_564_);
return v___f_565_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal___redArg___boxed(lean_object* v_inst_566_, lean_object* v_x_567_, lean_object* v_y_568_, lean_object* v_should__enforce_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal___redArg(v_inst_566_, v_x_567_, v_y_568_, v_should__enforce_569_);
lean_dec_ref(v_should__enforce_569_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal(lean_object* v_F_571_, lean_object* v_inst_572_, lean_object* v_x_573_, lean_object* v_y_574_, lean_object* v_should__enforce_575_){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal___redArg(v_inst_572_, v_x_573_, v_y_574_, v_should__enforce_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal___boxed(lean_object* v_F_577_, lean_object* v_inst_578_, lean_object* v_x_579_, lean_object* v_y_580_, lean_object* v_should__enforce_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal(v_F_577_, v_inst_578_, v_x_579_, v_y_580_, v_should__enforce_581_);
lean_dec_ref(v_should__enforce_581_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg___lam__0(lean_object* v_x_583_, lean_object* v_y_584_, lean_object* v_inst_585_, lean_object* v_should__enforce_586_, lean_object* v_multiplier_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_lc_589_; lean_object* v_lc_590_; lean_object* v_lc_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v_lc_589_ = lean_ctor_get(v_x_583_, 1);
lean_inc(v_lc_589_);
lean_dec_ref(v_x_583_);
v_lc_590_ = lean_ctor_get(v_y_584_, 1);
lean_inc(v_lc_590_);
lean_dec_ref(v_y_584_);
v_lc_591_ = lean_ctor_get(v_multiplier_587_, 1);
lean_inc(v_lc_591_);
lean_dec_ref(v_multiplier_587_);
lean_inc_ref(v_inst_585_);
v___x_592_ = lp_ark_x2dr1cs_ArkR1CS_LinearCombination_diff___redArg(v_inst_585_, v_lc_589_, v_lc_590_);
v___x_593_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_lc___redArg(v_inst_585_, v_should__enforce_586_);
v___x_594_ = lp_ark_x2dr1cs_ArkR1CS_enforce__r1cs__constraint___redArg___lam__0(v___x_592_, v_lc_591_, v___x_593_, v___y_588_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg___lam__0___boxed(lean_object* v_x_595_, lean_object* v_y_596_, lean_object* v_inst_597_, lean_object* v_should__enforce_598_, lean_object* v_multiplier_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg___lam__0(v_x_595_, v_y_596_, v_inst_597_, v_should__enforce_598_, v_multiplier_599_, v___y_600_);
lean_dec_ref(v___y_600_);
lean_dec_ref(v_should__enforce_598_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg(lean_object* v_inst_602_, lean_object* v_x_603_, lean_object* v_y_604_, lean_object* v_should__enforce_605_){
_start:
{
lean_object* v___x_606_; lean_object* v_toCommSemiring_607_; lean_object* v___x_608_; lean_object* v_toZero_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v_toInv_613_; lean_object* v___x_614_; lean_object* v_toRing_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v_toSub_618_; lean_object* v___f_619_; lean_object* v___y_621_; uint8_t v___x_624_; 
v___x_606_ = lp_mathlib_Field_toSemifield___redArg(v_inst_602_);
v_toCommSemiring_607_ = lean_ctor_get(v___x_606_, 0);
lean_inc_ref(v_toCommSemiring_607_);
v___x_608_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toCommSemiring_607_);
v_toZero_609_ = lean_ctor_get(v___x_608_, 1);
lean_inc(v_toZero_609_);
lean_dec_ref(v___x_608_);
v___x_610_ = lp_mathlib_Semifield_toCommGroupWithZero___redArg(v___x_606_);
lean_dec_ref(v___x_606_);
v___x_611_ = lp_mathlib_CommGroupWithZero_toDivisionCommMonoid___redArg(v___x_610_);
v___x_612_ = lp_mathlib_DivInvOneMonoid_toInvOneClass___redArg(v___x_611_);
lean_dec_ref(v___x_611_);
v_toInv_613_ = lean_ctor_get(v___x_612_, 1);
lean_inc(v_toInv_613_);
lean_dec_ref(v___x_612_);
lean_inc_ref_n(v_inst_602_, 2);
v___x_614_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_602_);
v_toRing_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc_ref(v_toRing_615_);
lean_dec_ref(v___x_614_);
v___x_616_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_615_);
v___x_617_ = lp_mathlib_AddGroupWithOne_toAddGroup___redArg(v___x_616_);
lean_dec_ref(v___x_616_);
v_toSub_618_ = lean_ctor_get(v___x_617_, 2);
lean_inc(v_toSub_618_);
lean_dec_ref(v___x_617_);
lean_inc_ref(v_should__enforce_605_);
lean_inc_ref(v_y_604_);
lean_inc_ref(v_x_603_);
v___f_619_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_619_, 0, v_x_603_);
lean_closure_set(v___f_619_, 1, v_y_604_);
lean_closure_set(v___f_619_, 2, v_inst_602_);
lean_closure_set(v___f_619_, 3, v_should__enforce_605_);
v___x_624_ = lp_ark_x2dr1cs_ArkR1CS_Boolean_value___redArg(v_should__enforce_605_);
lean_dec_ref(v_should__enforce_605_);
if (v___x_624_ == 0)
{
lean_dec(v_toSub_618_);
lean_dec(v_toInv_613_);
lean_dec_ref(v_y_604_);
lean_dec_ref(v_x_603_);
v___y_621_ = v_toZero_609_;
goto v___jp_620_;
}
else
{
lean_object* v_value_625_; lean_object* v_value_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
lean_dec(v_toZero_609_);
v_value_625_ = lean_ctor_get(v_x_603_, 0);
lean_inc(v_value_625_);
lean_dec_ref(v_x_603_);
v_value_626_ = lean_ctor_get(v_y_604_, 0);
lean_inc(v_value_626_);
lean_dec_ref(v_y_604_);
v___x_627_ = lean_apply_2(v_toSub_618_, v_value_625_, v_value_626_);
v___x_628_ = lean_apply_1(v_toInv_613_, v___x_627_);
v___y_621_ = v___x_628_;
goto v___jp_620_;
}
v___jp_620_:
{
lean_object* v___x_622_; lean_object* v___f_623_; 
v___x_622_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__witness___redArg(v_inst_602_, v___y_621_);
v___f_623_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_623_, 0, v___x_622_);
lean_closure_set(v___f_623_, 1, v___f_619_);
return v___f_623_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal(lean_object* v_F_629_, lean_object* v_inst_630_, lean_object* v_x_631_, lean_object* v_y_632_, lean_object* v_should__enforce_633_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg(v_inst_630_, v_x_631_, v_y_632_, v_should__enforce_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_Boolean_value_match__1_splitter___redArg(lean_object* v_x_635_, lean_object* v_h__1_636_, lean_object* v_h__2_637_){
_start:
{
if (lean_obj_tag(v_x_635_) == 0)
{
uint8_t v_b_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
lean_dec(v_h__2_637_);
v_b_638_ = lean_ctor_get_uint8(v_x_635_, 0);
lean_dec_ref_known(v_x_635_, 0);
v___x_639_ = lean_box(v_b_638_);
v___x_640_ = lean_apply_1(v_h__1_636_, v___x_639_);
return v___x_640_;
}
else
{
lean_object* v_v_641_; lean_object* v___x_642_; 
lean_dec(v_h__1_636_);
v_v_641_ = lean_ctor_get(v_x_635_, 0);
lean_inc_ref(v_v_641_);
lean_dec_ref_known(v_x_635_, 1);
v___x_642_ = lean_apply_1(v_h__2_637_, v_v_641_);
return v___x_642_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_Boolean_value_match__1_splitter(lean_object* v_F_643_, lean_object* v_motive_644_, lean_object* v_x_645_, lean_object* v_h__1_646_, lean_object* v_h__2_647_){
_start:
{
if (lean_obj_tag(v_x_645_) == 0)
{
uint8_t v_b_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
lean_dec(v_h__2_647_);
v_b_648_ = lean_ctor_get_uint8(v_x_645_, 0);
lean_dec_ref_known(v_x_645_, 0);
v___x_649_ = lean_box(v_b_648_);
v___x_650_ = lean_apply_1(v_h__1_646_, v___x_649_);
return v___x_650_;
}
else
{
lean_object* v_v_651_; lean_object* v___x_652_; 
lean_dec(v_h__1_646_);
v_v_651_ = lean_ctor_get(v_x_645_, 0);
lean_inc_ref(v_v_651_);
lean_dec_ref_known(v_x_645_, 1);
v___x_652_ = lean_apply_1(v_h__2_647_, v_v_651_);
return v___x_652_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorIdx___redArg(lean_object* v_x_653_){
_start:
{
if (lean_obj_tag(v_x_653_) == 0)
{
lean_object* v___x_654_; 
v___x_654_ = lean_unsigned_to_nat(0u);
return v___x_654_;
}
else
{
lean_object* v___x_655_; 
v___x_655_ = lean_unsigned_to_nat(1u);
return v___x_655_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorIdx___redArg___boxed(lean_object* v_x_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorIdx___redArg(v_x_656_);
lean_dec_ref(v_x_656_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorIdx(lean_object* v_F_658_, lean_object* v_x_659_){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorIdx___redArg(v_x_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorIdx___boxed(lean_object* v_F_661_, lean_object* v_x_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorIdx(v_F_661_, v_x_662_);
lean_dec_ref(v_x_662_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim___redArg(lean_object* v_t_664_, lean_object* v_k_665_){
_start:
{
if (lean_obj_tag(v_t_664_) == 0)
{
lean_object* v_c_666_; lean_object* v___x_667_; 
v_c_666_ = lean_ctor_get(v_t_664_, 0);
lean_inc(v_c_666_);
lean_dec_ref_known(v_t_664_, 1);
v___x_667_ = lean_apply_1(v_k_665_, v_c_666_);
return v___x_667_;
}
else
{
lean_object* v_v_668_; lean_object* v___x_669_; 
v_v_668_ = lean_ctor_get(v_t_664_, 0);
lean_inc_ref(v_v_668_);
lean_dec_ref_known(v_t_664_, 1);
v___x_669_ = lean_apply_1(v_k_665_, v_v_668_);
return v___x_669_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim(lean_object* v_F_670_, lean_object* v_motive_671_, lean_object* v_ctorIdx_672_, lean_object* v_t_673_, lean_object* v_h_674_, lean_object* v_k_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim___redArg(v_t_673_, v_k_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim___boxed(lean_object* v_F_677_, lean_object* v_motive_678_, lean_object* v_ctorIdx_679_, lean_object* v_t_680_, lean_object* v_h_681_, lean_object* v_k_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim(v_F_677_, v_motive_678_, v_ctorIdx_679_, v_t_680_, v_h_681_, v_k_682_);
lean_dec(v_ctorIdx_679_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_Constant_elim___redArg(lean_object* v_t_684_, lean_object* v_Constant_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim___redArg(v_t_684_, v_Constant_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_Constant_elim(lean_object* v_F_687_, lean_object* v_motive_688_, lean_object* v_t_689_, lean_object* v_h_690_, lean_object* v_Constant_691_){
_start:
{
lean_object* v___x_692_; 
v___x_692_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim___redArg(v_t_689_, v_Constant_691_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_Var_elim___redArg(lean_object* v_t_693_, lean_object* v_Var_694_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim___redArg(v_t_693_, v_Var_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_Var_elim(lean_object* v_F_696_, lean_object* v_motive_697_, lean_object* v_t_698_, lean_object* v_h_699_, lean_object* v_Var_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_ctorElim___redArg(v_t_698_, v_Var_700_);
return v___x_701_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lean_unsigned_to_nat(2u);
v___x_709_ = lean_nat_to_int(v___x_708_);
return v___x_709_;
}
}
static lean_object* _init_lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = lean_unsigned_to_nat(1u);
v___x_711_ = lean_nat_to_int(v___x_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg(lean_object* v_inst_718_, lean_object* v_x_719_, lean_object* v_prec_720_){
_start:
{
if (lean_obj_tag(v_x_719_) == 0)
{
lean_object* v_c_721_; lean_object* v___y_723_; lean_object* v___x_732_; uint8_t v___x_733_; 
v_c_721_ = lean_ctor_get(v_x_719_, 0);
lean_inc(v_c_721_);
lean_dec_ref_known(v_x_719_, 1);
v___x_732_ = lean_unsigned_to_nat(1024u);
v___x_733_ = lean_nat_dec_le(v___x_732_, v_prec_720_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; 
v___x_734_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__3, &lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__3_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__3);
v___y_723_ = v___x_734_;
goto v___jp_722_;
}
else
{
lean_object* v___x_735_; 
v___x_735_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__4, &lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__4_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__4);
v___y_723_ = v___x_735_;
goto v___jp_722_;
}
v___jp_722_:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_724_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__2));
v___x_725_ = lean_unsigned_to_nat(1024u);
v___x_726_ = lean_apply_2(v_inst_718_, v_c_721_, v___x_725_);
v___x_727_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_727_, 0, v___x_724_);
lean_ctor_set(v___x_727_, 1, v___x_726_);
lean_inc(v___y_723_);
v___x_728_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_728_, 0, v___y_723_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
v___x_729_ = 0;
v___x_730_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_730_, 0, v___x_728_);
lean_ctor_set_uint8(v___x_730_, sizeof(void*)*1, v___x_729_);
v___x_731_ = l_Repr_addAppParen(v___x_730_, v_prec_720_);
return v___x_731_;
}
}
else
{
lean_object* v_v_736_; lean_object* v___y_738_; lean_object* v___x_746_; uint8_t v___x_747_; 
v_v_736_ = lean_ctor_get(v_x_719_, 0);
lean_inc_ref(v_v_736_);
lean_dec_ref_known(v_x_719_, 1);
v___x_746_ = lean_unsigned_to_nat(1024u);
v___x_747_ = lean_nat_dec_le(v___x_746_, v_prec_720_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; 
v___x_748_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__3, &lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__3_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__3);
v___y_738_ = v___x_748_;
goto v___jp_737_;
}
else
{
lean_object* v___x_749_; 
v___x_749_ = lean_obj_once(&lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__4, &lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__4_once, _init_lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__4);
v___y_738_ = v___x_749_;
goto v___jp_737_;
}
v___jp_737_:
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_739_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___closed__7));
v___x_740_ = lp_ark_x2dr1cs_ArkR1CS_instReprAllocatedFp_repr___redArg(v_inst_718_, v_v_736_);
v___x_741_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_739_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
lean_inc(v___y_738_);
v___x_742_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_742_, 0, v___y_738_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = 0;
v___x_744_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_744_, 0, v___x_742_);
lean_ctor_set_uint8(v___x_744_, sizeof(void*)*1, v___x_743_);
v___x_745_ = l_Repr_addAppParen(v___x_744_, v_prec_720_);
return v___x_745_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg___boxed(lean_object* v_inst_750_, lean_object* v_x_751_, lean_object* v_prec_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg(v_inst_750_, v_x_751_, v_prec_752_);
lean_dec(v_prec_752_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr(lean_object* v_F_754_, lean_object* v_inst_755_, lean_object* v_x_756_, lean_object* v_prec_757_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___redArg(v_inst_755_, v_x_756_, v_prec_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___boxed(lean_object* v_F_759_, lean_object* v_inst_760_, lean_object* v_x_761_, lean_object* v_prec_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr(v_F_759_, v_inst_760_, v_x_761_, v_prec_762_);
lean_dec(v_prec_762_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar___redArg(lean_object* v_inst_764_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___boxed), 4, 2);
lean_closure_set(v___x_765_, 0, lean_box(0));
lean_closure_set(v___x_765_, 1, v_inst_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_instReprFpVar(lean_object* v_F_766_, lean_object* v_inst_767_){
_start:
{
lean_object* v___x_768_; 
v___x_768_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_instReprFpVar_repr___boxed), 4, 2);
lean_closure_set(v___x_768_, 0, lean_box(0));
lean_closure_set(v___x_768_, 1, v_inst_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_eval___redArg(lean_object* v_inst_769_, lean_object* v_a_770_, lean_object* v_x_771_){
_start:
{
if (lean_obj_tag(v_x_771_) == 0)
{
lean_object* v_c_772_; 
lean_dec_ref(v_a_770_);
lean_dec_ref(v_inst_769_);
v_c_772_ = lean_ctor_get(v_x_771_, 0);
lean_inc(v_c_772_);
lean_dec_ref_known(v_x_771_, 1);
return v_c_772_;
}
else
{
lean_object* v_v_773_; lean_object* v___x_774_; 
v_v_773_ = lean_ctor_get(v_x_771_, 0);
lean_inc_ref(v_v_773_);
lean_dec_ref_known(v_x_771_, 1);
v___x_774_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_eval___redArg(v_inst_769_, v_a_770_, v_v_773_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_eval(lean_object* v_F_775_, lean_object* v_inst_776_, lean_object* v_a_777_, lean_object* v_x_778_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_eval___redArg(v_inst_776_, v_a_777_, v_x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_value___redArg(lean_object* v_x_780_){
_start:
{
if (lean_obj_tag(v_x_780_) == 0)
{
lean_object* v_c_781_; 
v_c_781_ = lean_ctor_get(v_x_780_, 0);
lean_inc(v_c_781_);
return v_c_781_;
}
else
{
lean_object* v_v_782_; lean_object* v_value_783_; 
v_v_782_ = lean_ctor_get(v_x_780_, 0);
v_value_783_ = lean_ctor_get(v_v_782_, 0);
lean_inc(v_value_783_);
return v_value_783_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_value___redArg___boxed(lean_object* v_x_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_value___redArg(v_x_784_);
lean_dec_ref(v_x_784_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_value(lean_object* v_F_786_, lean_object* v_x_787_){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_value___redArg(v_x_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_value___boxed(lean_object* v_F_789_, lean_object* v_x_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_value(v_F_789_, v_x_790_);
lean_dec_ref(v_x_790_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_zero___redArg(lean_object* v_inst_792_){
_start:
{
lean_object* v___x_793_; lean_object* v_toCommSemiring_794_; lean_object* v___x_795_; lean_object* v_toZero_796_; lean_object* v___x_797_; 
v___x_793_ = lp_mathlib_Field_toSemifield___redArg(v_inst_792_);
v_toCommSemiring_794_ = lean_ctor_get(v___x_793_, 0);
lean_inc_ref(v_toCommSemiring_794_);
lean_dec_ref(v___x_793_);
v___x_795_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toCommSemiring_794_);
v_toZero_796_ = lean_ctor_get(v___x_795_, 1);
lean_inc(v_toZero_796_);
lean_dec_ref(v___x_795_);
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v_toZero_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_zero___redArg___boxed(lean_object* v_inst_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_zero___redArg(v_inst_798_);
lean_dec_ref(v_inst_798_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_zero(lean_object* v_F_800_, lean_object* v_inst_801_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_zero___redArg(v_inst_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_zero___boxed(lean_object* v_F_803_, lean_object* v_inst_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_zero(v_F_803_, v_inst_804_);
lean_dec_ref(v_inst_804_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_one___redArg(lean_object* v_inst_806_){
_start:
{
lean_object* v___x_807_; lean_object* v_toRing_808_; lean_object* v___x_809_; lean_object* v_toAddMonoidWithOne_810_; lean_object* v_toOne_811_; lean_object* v___x_812_; 
v___x_807_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_806_);
v_toRing_808_ = lean_ctor_get(v___x_807_, 0);
lean_inc_ref(v_toRing_808_);
lean_dec_ref(v___x_807_);
v___x_809_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_808_);
v_toAddMonoidWithOne_810_ = lean_ctor_get(v___x_809_, 1);
lean_inc_ref(v_toAddMonoidWithOne_810_);
lean_dec_ref(v___x_809_);
v_toOne_811_ = lean_ctor_get(v_toAddMonoidWithOne_810_, 2);
lean_inc(v_toOne_811_);
lean_dec_ref(v_toAddMonoidWithOne_810_);
v___x_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_812_, 0, v_toOne_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_one(lean_object* v_F_813_, lean_object* v_inst_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_one___redArg(v_inst_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_constant___redArg(lean_object* v_c_816_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_817_, 0, v_c_816_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_constant(lean_object* v_F_818_, lean_object* v_c_819_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_820_, 0, v_c_819_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg___lam__0(lean_object* v_x_821_, lean_object* v___y_822_){
_start:
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_823_, 0, v_x_821_);
v___x_824_ = lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(v___x_823_, v___y_822_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg___lam__0___boxed(lean_object* v_x_825_, lean_object* v___y_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg___lam__0(v_x_825_, v___y_826_);
lean_dec_ref(v___y_826_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg(lean_object* v_inst_829_, lean_object* v_v_830_){
_start:
{
lean_object* v___f_831_; lean_object* v___x_832_; lean_object* v___f_833_; 
v___f_831_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg___closed__0));
v___x_832_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__input___redArg(v_inst_829_, v_v_830_);
v___f_833_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_833_, 0, v___x_832_);
lean_closure_set(v___f_833_, 1, v___f_831_);
return v___f_833_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input(lean_object* v_F_834_, lean_object* v_inst_835_, lean_object* v_v_836_){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg(v_inst_835_, v_v_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__witness___redArg(lean_object* v_inst_838_, lean_object* v_v_839_){
_start:
{
lean_object* v___f_840_; lean_object* v___x_841_; lean_object* v___f_842_; 
v___f_840_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_FpVar_new__input___redArg___closed__0));
v___x_841_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__witness___redArg(v_inst_838_, v_v_839_);
v___f_842_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_842_, 0, v___x_841_);
lean_closure_set(v___f_842_, 1, v___f_840_);
return v___f_842_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_new__witness(lean_object* v_F_843_, lean_object* v_inst_844_, lean_object* v_v_845_){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_new__witness___redArg(v_inst_844_, v_v_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_add___redArg(lean_object* v_inst_847_, lean_object* v_inst_848_, lean_object* v_x_849_, lean_object* v_x_850_){
_start:
{
lean_object* v___x_851_; lean_object* v_toCommSemiring_852_; lean_object* v___x_853_; 
v___x_851_ = lp_mathlib_Field_toSemifield___redArg(v_inst_847_);
v_toCommSemiring_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc_ref(v_toCommSemiring_852_);
lean_dec_ref(v___x_851_);
v___x_853_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_852_);
if (lean_obj_tag(v_x_849_) == 0)
{
if (lean_obj_tag(v_x_850_) == 0)
{
lean_object* v_toAdd_854_; lean_object* v_c_855_; lean_object* v_c_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_864_; 
lean_dec_ref(v_inst_848_);
v_toAdd_854_ = lean_ctor_get(v___x_853_, 1);
lean_inc(v_toAdd_854_);
lean_dec_ref(v___x_853_);
v_c_855_ = lean_ctor_get(v_x_849_, 0);
lean_inc(v_c_855_);
lean_dec_ref_known(v_x_849_, 1);
v_c_856_ = lean_ctor_get(v_x_850_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v_x_850_);
if (v_isSharedCheck_864_ == 0)
{
v___x_858_ = v_x_850_;
v_isShared_859_ = v_isSharedCheck_864_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_c_856_);
lean_dec(v_x_850_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_864_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_860_; lean_object* v___x_862_; 
v___x_860_ = lean_apply_2(v_toAdd_854_, v_c_855_, v_c_856_);
if (v_isShared_859_ == 0)
{
lean_ctor_set(v___x_858_, 0, v___x_860_);
v___x_862_ = v___x_858_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v___x_860_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
else
{
lean_object* v_c_865_; lean_object* v_v_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_874_; 
lean_dec_ref(v___x_853_);
v_c_865_ = lean_ctor_get(v_x_849_, 0);
lean_inc(v_c_865_);
lean_dec_ref_known(v_x_849_, 1);
v_v_866_ = lean_ctor_get(v_x_850_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v_x_850_);
if (v_isSharedCheck_874_ == 0)
{
v___x_868_ = v_x_850_;
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_v_866_);
lean_dec(v_x_850_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_870_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant___redArg(v_inst_847_, v_inst_848_, v_v_866_, v_c_865_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_870_);
v___x_872_ = v___x_868_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_870_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
else
{
lean_dec_ref(v___x_853_);
if (lean_obj_tag(v_x_850_) == 0)
{
lean_object* v_v_875_; lean_object* v_c_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_884_; 
v_v_875_ = lean_ctor_get(v_x_849_, 0);
lean_inc_ref(v_v_875_);
lean_dec_ref_known(v_x_849_, 1);
v_c_876_ = lean_ctor_get(v_x_850_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v_x_850_);
if (v_isSharedCheck_884_ == 0)
{
v___x_878_ = v_x_850_;
v_isShared_879_ = v_isSharedCheck_884_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_c_876_);
lean_dec(v_x_850_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_884_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_880_; lean_object* v___x_882_; 
v___x_880_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add__constant___redArg(v_inst_847_, v_inst_848_, v_v_875_, v_c_876_);
if (v_isShared_879_ == 0)
{
lean_ctor_set_tag(v___x_878_, 1);
lean_ctor_set(v___x_878_, 0, v___x_880_);
v___x_882_ = v___x_878_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v___x_880_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
else
{
lean_object* v_v_885_; lean_object* v_v_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_894_; 
lean_dec_ref(v_inst_848_);
v_v_885_ = lean_ctor_get(v_x_849_, 0);
lean_inc_ref(v_v_885_);
lean_dec_ref_known(v_x_849_, 1);
v_v_886_ = lean_ctor_get(v_x_850_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v_x_850_);
if (v_isSharedCheck_894_ == 0)
{
v___x_888_ = v_x_850_;
v_isShared_889_ = v_isSharedCheck_894_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_v_886_);
lean_dec(v_x_850_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_894_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_890_; lean_object* v___x_892_; 
v___x_890_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_add___redArg(v_inst_847_, v_v_885_, v_v_886_);
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 0, v___x_890_);
v___x_892_ = v___x_888_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_890_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_add___redArg___boxed(lean_object* v_inst_895_, lean_object* v_inst_896_, lean_object* v_x_897_, lean_object* v_x_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_add___redArg(v_inst_895_, v_inst_896_, v_x_897_, v_x_898_);
lean_dec_ref(v_inst_895_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_add(lean_object* v_F_900_, lean_object* v_inst_901_, lean_object* v_inst_902_, lean_object* v_x_903_, lean_object* v_x_904_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_add___redArg(v_inst_901_, v_inst_902_, v_x_903_, v_x_904_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_add___boxed(lean_object* v_F_906_, lean_object* v_inst_907_, lean_object* v_inst_908_, lean_object* v_x_909_, lean_object* v_x_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_add(v_F_906_, v_inst_907_, v_inst_908_, v_x_909_, v_x_910_);
lean_dec_ref(v_inst_907_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_sub___redArg(lean_object* v_inst_912_, lean_object* v_inst_913_, lean_object* v_x_914_, lean_object* v_x_915_){
_start:
{
lean_object* v___x_916_; lean_object* v_toRing_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
lean_inc_ref(v_inst_912_);
v___x_916_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_912_);
v_toRing_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc_ref(v_toRing_917_);
lean_dec_ref(v___x_916_);
v___x_918_ = lp_mathlib_Ring_toAddGroupWithOne___redArg(v_toRing_917_);
v___x_919_ = lp_mathlib_AddGroupWithOne_toAddGroup___redArg(v___x_918_);
lean_dec_ref(v___x_918_);
if (lean_obj_tag(v_x_914_) == 0)
{
if (lean_obj_tag(v_x_915_) == 0)
{
lean_object* v_toSub_920_; lean_object* v_c_921_; lean_object* v_c_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_930_; 
lean_dec_ref(v_inst_913_);
lean_dec_ref(v_inst_912_);
v_toSub_920_ = lean_ctor_get(v___x_919_, 2);
lean_inc(v_toSub_920_);
lean_dec_ref(v___x_919_);
v_c_921_ = lean_ctor_get(v_x_914_, 0);
lean_inc(v_c_921_);
lean_dec_ref_known(v_x_914_, 1);
v_c_922_ = lean_ctor_get(v_x_915_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v_x_915_);
if (v_isSharedCheck_930_ == 0)
{
v___x_924_ = v_x_915_;
v_isShared_925_ = v_isSharedCheck_930_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_c_922_);
lean_dec(v_x_915_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_930_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_926_ = lean_apply_2(v_toSub_920_, v_c_921_, v_c_922_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_926_);
v___x_928_ = v___x_924_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_926_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
else
{
lean_object* v_c_931_; lean_object* v_v_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_941_; 
lean_dec_ref(v___x_919_);
v_c_931_ = lean_ctor_get(v_x_914_, 0);
lean_inc(v_c_931_);
lean_dec_ref_known(v_x_914_, 1);
v_v_932_ = lean_ctor_get(v_x_915_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v_x_915_);
if (v_isSharedCheck_941_ == 0)
{
v___x_934_ = v_x_915_;
v_isShared_935_ = v_isSharedCheck_941_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_v_932_);
lean_dec(v_x_915_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_941_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_939_; 
lean_inc_ref(v_inst_912_);
v___x_936_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub__constant___redArg(v_inst_912_, v_inst_913_, v_v_932_, v_c_931_);
v___x_937_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_negate___redArg(v_inst_912_, v___x_936_);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 0, v___x_937_);
v___x_939_ = v___x_934_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_937_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
else
{
lean_dec_ref(v___x_919_);
if (lean_obj_tag(v_x_915_) == 0)
{
lean_object* v_v_942_; lean_object* v_c_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_951_; 
v_v_942_ = lean_ctor_get(v_x_914_, 0);
lean_inc_ref(v_v_942_);
lean_dec_ref_known(v_x_914_, 1);
v_c_943_ = lean_ctor_get(v_x_915_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v_x_915_);
if (v_isSharedCheck_951_ == 0)
{
v___x_945_ = v_x_915_;
v_isShared_946_ = v_isSharedCheck_951_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_c_943_);
lean_dec(v_x_915_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_951_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; lean_object* v___x_949_; 
v___x_947_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub__constant___redArg(v_inst_912_, v_inst_913_, v_v_942_, v_c_943_);
if (v_isShared_946_ == 0)
{
lean_ctor_set_tag(v___x_945_, 1);
lean_ctor_set(v___x_945_, 0, v___x_947_);
v___x_949_ = v___x_945_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v___x_947_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
else
{
lean_object* v_v_952_; lean_object* v_v_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_961_; 
lean_dec_ref(v_inst_913_);
v_v_952_ = lean_ctor_get(v_x_914_, 0);
lean_inc_ref(v_v_952_);
lean_dec_ref_known(v_x_914_, 1);
v_v_953_ = lean_ctor_get(v_x_915_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v_x_915_);
if (v_isSharedCheck_961_ == 0)
{
v___x_955_ = v_x_915_;
v_isShared_956_ = v_isSharedCheck_961_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_v_953_);
lean_dec(v_x_915_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_961_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_957_; lean_object* v___x_959_; 
v___x_957_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_sub___redArg(v_inst_912_, v_v_952_, v_v_953_);
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 0, v___x_957_);
v___x_959_ = v___x_955_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_957_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_sub(lean_object* v_F_962_, lean_object* v_inst_963_, lean_object* v_inst_964_, lean_object* v_x_965_, lean_object* v_x_966_){
_start:
{
lean_object* v___x_967_; 
v___x_967_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_sub___redArg(v_inst_963_, v_inst_964_, v_x_965_, v_x_966_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg___lam__0(lean_object* v_p_968_, lean_object* v___y_969_){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_970_, 0, v_p_968_);
v___x_971_ = lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0(v___x_970_, v___y_969_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg___lam__0___boxed(lean_object* v_p_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg___lam__0(v_p_972_, v___y_973_);
lean_dec_ref(v___y_973_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg(lean_object* v_inst_976_, lean_object* v_inst_977_, lean_object* v_x_978_, lean_object* v_x_979_){
_start:
{
lean_object* v___x_980_; lean_object* v_toCommSemiring_981_; lean_object* v___x_982_; 
v___x_980_ = lp_mathlib_Field_toSemifield___redArg(v_inst_976_);
v_toCommSemiring_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc_ref(v_toCommSemiring_981_);
lean_dec_ref(v___x_980_);
v___x_982_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_981_);
if (lean_obj_tag(v_x_978_) == 0)
{
if (lean_obj_tag(v_x_979_) == 0)
{
lean_object* v_toMul_983_; lean_object* v_c_984_; lean_object* v_c_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_994_; 
lean_dec_ref(v_inst_977_);
lean_dec_ref(v_inst_976_);
v_toMul_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_toMul_983_);
lean_dec_ref(v___x_982_);
v_c_984_ = lean_ctor_get(v_x_978_, 0);
lean_inc(v_c_984_);
lean_dec_ref_known(v_x_978_, 1);
v_c_985_ = lean_ctor_get(v_x_979_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v_x_979_);
if (v_isSharedCheck_994_ == 0)
{
v___x_987_ = v_x_979_;
v_isShared_988_ = v_isSharedCheck_994_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_c_985_);
lean_dec(v_x_979_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_994_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_989_; lean_object* v___x_991_; 
v___x_989_ = lean_apply_2(v_toMul_983_, v_c_984_, v_c_985_);
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 0, v___x_989_);
v___x_991_ = v___x_987_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_989_);
v___x_991_ = v_reuseFailAlloc_993_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
lean_object* v___f_992_; 
v___f_992_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_992_, 0, v___x_991_);
return v___f_992_;
}
}
}
else
{
lean_object* v_c_995_; lean_object* v_v_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1005_; 
lean_dec_ref(v___x_982_);
v_c_995_ = lean_ctor_get(v_x_978_, 0);
lean_inc(v_c_995_);
lean_dec_ref_known(v_x_978_, 1);
v_v_996_ = lean_ctor_get(v_x_979_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v_x_979_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_998_ = v_x_979_;
v_isShared_999_ = v_isSharedCheck_1005_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_v_996_);
lean_dec(v_x_979_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1005_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1000_; lean_object* v___x_1002_; 
v___x_1000_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul__constant___redArg(v_inst_976_, v_inst_977_, v_v_996_, v_c_995_);
if (v_isShared_999_ == 0)
{
lean_ctor_set(v___x_998_, 0, v___x_1000_);
v___x_1002_ = v___x_998_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_1000_);
v___x_1002_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
lean_object* v___f_1003_; 
v___f_1003_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1003_, 0, v___x_1002_);
return v___f_1003_;
}
}
}
}
else
{
lean_dec_ref(v___x_982_);
if (lean_obj_tag(v_x_979_) == 0)
{
lean_object* v_v_1006_; lean_object* v_c_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1016_; 
v_v_1006_ = lean_ctor_get(v_x_978_, 0);
lean_inc_ref(v_v_1006_);
lean_dec_ref_known(v_x_978_, 1);
v_c_1007_ = lean_ctor_get(v_x_979_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v_x_979_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1009_ = v_x_979_;
v_isShared_1010_ = v_isSharedCheck_1016_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_c_1007_);
lean_dec(v_x_979_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1016_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1011_; lean_object* v___x_1013_; 
v___x_1011_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul__constant___redArg(v_inst_976_, v_inst_977_, v_v_1006_, v_c_1007_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set_tag(v___x_1009_, 1);
lean_ctor_set(v___x_1009_, 0, v___x_1011_);
v___x_1013_ = v___x_1009_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v___x_1011_);
v___x_1013_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
lean_object* v___f_1014_; 
v___f_1014_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1014_, 0, v___x_1013_);
return v___f_1014_;
}
}
}
else
{
lean_object* v_v_1017_; lean_object* v_v_1018_; lean_object* v___f_1019_; lean_object* v___x_1020_; lean_object* v___f_1021_; 
lean_dec_ref(v_inst_977_);
v_v_1017_ = lean_ctor_get(v_x_978_, 0);
lean_inc_ref(v_v_1017_);
lean_dec_ref_known(v_x_978_, 1);
v_v_1018_ = lean_ctor_get(v_x_979_, 0);
lean_inc_ref(v_v_1018_);
lean_dec_ref_known(v_x_979_, 1);
v___f_1019_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg___closed__0));
v___x_1020_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg(v_inst_976_, v_v_1017_, v_v_1018_);
v___f_1021_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1021_, 0, v___x_1020_);
lean_closure_set(v___f_1021_, 1, v___f_1019_);
return v___f_1021_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul(lean_object* v_F_1022_, lean_object* v_inst_1023_, lean_object* v_inst_1024_, lean_object* v_x_1025_, lean_object* v_x_1026_){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg(v_inst_1023_, v_inst_1024_, v_x_1025_, v_x_1026_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul__scalar___redArg(lean_object* v_inst_1028_, lean_object* v_inst_1029_, lean_object* v_x_1030_, lean_object* v_c_1031_){
_start:
{
lean_object* v___x_1032_; lean_object* v_toCommSemiring_1033_; lean_object* v___x_1034_; lean_object* v_toZero_1035_; lean_object* v___x_1036_; uint8_t v___x_1037_; 
v___x_1032_ = lp_mathlib_Field_toSemifield___redArg(v_inst_1028_);
v_toCommSemiring_1033_ = lean_ctor_get(v___x_1032_, 0);
lean_inc_ref(v_toCommSemiring_1033_);
lean_dec_ref(v___x_1032_);
v___x_1034_ = lp_mathlib_instMulZeroClassOfSemiring___redArg(v_toCommSemiring_1033_);
v_toZero_1035_ = lean_ctor_get(v___x_1034_, 1);
lean_inc(v_toZero_1035_);
lean_dec_ref(v___x_1034_);
lean_inc_ref(v_inst_1029_);
lean_inc(v_c_1031_);
v___x_1036_ = lean_apply_2(v_inst_1029_, v_c_1031_, v_toZero_1035_);
v___x_1037_ = lean_unbox(v___x_1036_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1038_, 0, v_c_1031_);
v___x_1039_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg(v_inst_1028_, v_inst_1029_, v_x_1030_, v___x_1038_);
return v___x_1039_;
}
else
{
lean_object* v___x_1040_; lean_object* v___f_1041_; 
lean_dec(v_c_1031_);
lean_dec_ref(v_x_1030_);
lean_dec_ref(v_inst_1029_);
v___x_1040_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_zero___redArg(v_inst_1028_);
lean_dec_ref(v_inst_1028_);
v___f_1041_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1041_, 0, v___x_1040_);
return v___f_1041_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_mul__scalar(lean_object* v_F_1042_, lean_object* v_inst_1043_, lean_object* v_inst_1044_, lean_object* v_x_1045_, lean_object* v_c_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_mul__scalar___redArg(v_inst_1043_, v_inst_1044_, v_x_1045_, v_c_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_negate___redArg(lean_object* v_inst_1048_, lean_object* v_x_1049_){
_start:
{
lean_object* v___x_1050_; lean_object* v_toRing_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
lean_inc_ref(v_inst_1048_);
v___x_1050_ = lp_mathlib_Field_toDivisionRing___redArg(v_inst_1048_);
v_toRing_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc_ref(v_toRing_1051_);
lean_dec_ref(v___x_1050_);
v___x_1052_ = lp_mathlib_Ring_toAddCommGroup___redArg(v_toRing_1051_);
lean_dec_ref(v_toRing_1051_);
v___x_1053_ = lp_mathlib_SubNegZeroMonoid_toNegZeroClass___redArg(v___x_1052_);
lean_dec_ref(v___x_1052_);
if (lean_obj_tag(v_x_1049_) == 0)
{
lean_object* v_toNeg_1054_; lean_object* v_c_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1063_; 
lean_dec_ref(v_inst_1048_);
v_toNeg_1054_ = lean_ctor_get(v___x_1053_, 1);
lean_inc(v_toNeg_1054_);
lean_dec_ref(v___x_1053_);
v_c_1055_ = lean_ctor_get(v_x_1049_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_x_1049_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1057_ = v_x_1049_;
v_isShared_1058_ = v_isSharedCheck_1063_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_c_1055_);
lean_dec(v_x_1049_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1063_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1059_ = lean_apply_1(v_toNeg_1054_, v_c_1055_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v___x_1059_);
v___x_1061_ = v___x_1057_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1059_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
else
{
lean_object* v_v_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1072_; 
lean_dec_ref(v___x_1053_);
v_v_1064_ = lean_ctor_get(v_x_1049_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v_x_1049_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1066_ = v_x_1049_;
v_isShared_1067_ = v_isSharedCheck_1072_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_v_1064_);
lean_dec(v_x_1049_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1072_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1068_; lean_object* v___x_1070_; 
v___x_1068_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_negate___redArg(v_inst_1048_, v_v_1064_);
if (v_isShared_1067_ == 0)
{
lean_ctor_set(v___x_1066_, 0, v___x_1068_);
v___x_1070_ = v___x_1066_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1068_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_negate(lean_object* v_F_1073_, lean_object* v_inst_1074_, lean_object* v_x_1075_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_negate___redArg(v_inst_1074_, v_x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_double___redArg(lean_object* v_inst_1077_, lean_object* v_x_1078_){
_start:
{
lean_object* v___x_1079_; lean_object* v_toCommSemiring_1080_; lean_object* v___x_1081_; 
v___x_1079_ = lp_mathlib_Field_toSemifield___redArg(v_inst_1077_);
v_toCommSemiring_1080_ = lean_ctor_get(v___x_1079_, 0);
lean_inc_ref(v_toCommSemiring_1080_);
lean_dec_ref(v___x_1079_);
v___x_1081_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_1080_);
if (lean_obj_tag(v_x_1078_) == 0)
{
lean_object* v_toAdd_1082_; lean_object* v_c_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1091_; 
lean_dec_ref(v_inst_1077_);
v_toAdd_1082_ = lean_ctor_get(v___x_1081_, 1);
lean_inc(v_toAdd_1082_);
lean_dec_ref(v___x_1081_);
v_c_1083_ = lean_ctor_get(v_x_1078_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_x_1078_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1085_ = v_x_1078_;
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_c_1083_);
lean_dec(v_x_1078_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1087_; lean_object* v___x_1089_; 
lean_inc(v_c_1083_);
v___x_1087_ = lean_apply_2(v_toAdd_1082_, v_c_1083_, v_c_1083_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 0, v___x_1087_);
v___x_1089_ = v___x_1085_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
else
{
lean_object* v_v_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1100_; 
lean_dec_ref(v___x_1081_);
v_v_1092_ = lean_ctor_get(v_x_1078_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_x_1078_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1094_ = v_x_1078_;
v_isShared_1095_ = v_isSharedCheck_1100_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_v_1092_);
lean_dec(v_x_1078_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1100_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___x_1096_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_double___redArg(v_inst_1077_, v_v_1092_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v___x_1096_);
v___x_1098_ = v___x_1094_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_double(lean_object* v_F_1101_, lean_object* v_inst_1102_, lean_object* v_x_1103_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_double___redArg(v_inst_1102_, v_x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_square___redArg(lean_object* v_inst_1105_, lean_object* v_x_1106_){
_start:
{
lean_object* v___x_1107_; lean_object* v_toCommSemiring_1108_; lean_object* v___x_1109_; 
v___x_1107_ = lp_mathlib_Field_toSemifield___redArg(v_inst_1105_);
v_toCommSemiring_1108_ = lean_ctor_get(v___x_1107_, 0);
lean_inc_ref(v_toCommSemiring_1108_);
lean_dec_ref(v___x_1107_);
v___x_1109_ = lp_mathlib_instDistribOfSemiring___redArg(v_toCommSemiring_1108_);
if (lean_obj_tag(v_x_1106_) == 0)
{
lean_object* v_toMul_1110_; lean_object* v_c_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1120_; 
lean_dec_ref(v_inst_1105_);
v_toMul_1110_ = lean_ctor_get(v___x_1109_, 0);
lean_inc(v_toMul_1110_);
lean_dec_ref(v___x_1109_);
v_c_1111_ = lean_ctor_get(v_x_1106_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v_x_1106_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1113_ = v_x_1106_;
v_isShared_1114_ = v_isSharedCheck_1120_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_c_1111_);
lean_dec(v_x_1106_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1120_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; lean_object* v___x_1117_; 
lean_inc(v_c_1111_);
v___x_1115_ = lean_apply_2(v_toMul_1110_, v_c_1111_, v_c_1111_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 0, v___x_1115_);
v___x_1117_ = v___x_1113_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
lean_object* v___f_1118_; 
v___f_1118_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1118_, 0, v___x_1117_);
return v___f_1118_;
}
}
}
else
{
lean_object* v_v_1121_; lean_object* v___f_1122_; lean_object* v___x_1123_; lean_object* v___f_1124_; 
lean_dec_ref(v___x_1109_);
v_v_1121_ = lean_ctor_get(v_x_1106_, 0);
lean_inc_ref_n(v_v_1121_, 2);
lean_dec_ref_known(v_x_1106_, 1);
v___f_1122_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_FpVar_mul___redArg___closed__0));
v___x_1123_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_mul___redArg(v_inst_1105_, v_v_1121_, v_v_1121_);
v___f_1124_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_bind___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1124_, 0, v___x_1123_);
lean_closure_set(v___f_1124_, 1, v___f_1122_);
return v___f_1124_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_square(lean_object* v_F_1125_, lean_object* v_inst_1126_, lean_object* v_x_1127_){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_square___redArg(v_inst_1126_, v_x_1127_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_add_match__1_splitter___redArg(lean_object* v_x_1129_, lean_object* v_x_1130_, lean_object* v_h__1_1131_, lean_object* v_h__2_1132_, lean_object* v_h__3_1133_, lean_object* v_h__4_1134_){
_start:
{
if (lean_obj_tag(v_x_1129_) == 0)
{
lean_dec(v_h__4_1134_);
lean_dec(v_h__3_1133_);
if (lean_obj_tag(v_x_1130_) == 0)
{
lean_object* v_c_1135_; lean_object* v_c_1136_; lean_object* v___x_1137_; 
lean_dec(v_h__2_1132_);
v_c_1135_ = lean_ctor_get(v_x_1129_, 0);
lean_inc(v_c_1135_);
lean_dec_ref_known(v_x_1129_, 1);
v_c_1136_ = lean_ctor_get(v_x_1130_, 0);
lean_inc(v_c_1136_);
lean_dec_ref_known(v_x_1130_, 1);
v___x_1137_ = lean_apply_2(v_h__1_1131_, v_c_1135_, v_c_1136_);
return v___x_1137_;
}
else
{
lean_object* v_c_1138_; lean_object* v_v_1139_; lean_object* v___x_1140_; 
lean_dec(v_h__1_1131_);
v_c_1138_ = lean_ctor_get(v_x_1129_, 0);
lean_inc(v_c_1138_);
lean_dec_ref_known(v_x_1129_, 1);
v_v_1139_ = lean_ctor_get(v_x_1130_, 0);
lean_inc_ref(v_v_1139_);
lean_dec_ref_known(v_x_1130_, 1);
v___x_1140_ = lean_apply_2(v_h__2_1132_, v_c_1138_, v_v_1139_);
return v___x_1140_;
}
}
else
{
lean_dec(v_h__2_1132_);
lean_dec(v_h__1_1131_);
if (lean_obj_tag(v_x_1130_) == 0)
{
lean_object* v_v_1141_; lean_object* v_c_1142_; lean_object* v___x_1143_; 
lean_dec(v_h__4_1134_);
v_v_1141_ = lean_ctor_get(v_x_1129_, 0);
lean_inc_ref(v_v_1141_);
lean_dec_ref_known(v_x_1129_, 1);
v_c_1142_ = lean_ctor_get(v_x_1130_, 0);
lean_inc(v_c_1142_);
lean_dec_ref_known(v_x_1130_, 1);
v___x_1143_ = lean_apply_2(v_h__3_1133_, v_v_1141_, v_c_1142_);
return v___x_1143_;
}
else
{
lean_object* v_v_1144_; lean_object* v_v_1145_; lean_object* v___x_1146_; 
lean_dec(v_h__3_1133_);
v_v_1144_ = lean_ctor_get(v_x_1129_, 0);
lean_inc_ref(v_v_1144_);
lean_dec_ref_known(v_x_1129_, 1);
v_v_1145_ = lean_ctor_get(v_x_1130_, 0);
lean_inc_ref(v_v_1145_);
lean_dec_ref_known(v_x_1130_, 1);
v___x_1146_ = lean_apply_2(v_h__4_1134_, v_v_1144_, v_v_1145_);
return v___x_1146_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_add_match__1_splitter(lean_object* v_F_1147_, lean_object* v_motive_1148_, lean_object* v_x_1149_, lean_object* v_x_1150_, lean_object* v_h__1_1151_, lean_object* v_h__2_1152_, lean_object* v_h__3_1153_, lean_object* v_h__4_1154_){
_start:
{
if (lean_obj_tag(v_x_1149_) == 0)
{
lean_dec(v_h__4_1154_);
lean_dec(v_h__3_1153_);
if (lean_obj_tag(v_x_1150_) == 0)
{
lean_object* v_c_1155_; lean_object* v_c_1156_; lean_object* v___x_1157_; 
lean_dec(v_h__2_1152_);
v_c_1155_ = lean_ctor_get(v_x_1149_, 0);
lean_inc(v_c_1155_);
lean_dec_ref_known(v_x_1149_, 1);
v_c_1156_ = lean_ctor_get(v_x_1150_, 0);
lean_inc(v_c_1156_);
lean_dec_ref_known(v_x_1150_, 1);
v___x_1157_ = lean_apply_2(v_h__1_1151_, v_c_1155_, v_c_1156_);
return v___x_1157_;
}
else
{
lean_object* v_c_1158_; lean_object* v_v_1159_; lean_object* v___x_1160_; 
lean_dec(v_h__1_1151_);
v_c_1158_ = lean_ctor_get(v_x_1149_, 0);
lean_inc(v_c_1158_);
lean_dec_ref_known(v_x_1149_, 1);
v_v_1159_ = lean_ctor_get(v_x_1150_, 0);
lean_inc_ref(v_v_1159_);
lean_dec_ref_known(v_x_1150_, 1);
v___x_1160_ = lean_apply_2(v_h__2_1152_, v_c_1158_, v_v_1159_);
return v___x_1160_;
}
}
else
{
lean_dec(v_h__2_1152_);
lean_dec(v_h__1_1151_);
if (lean_obj_tag(v_x_1150_) == 0)
{
lean_object* v_v_1161_; lean_object* v_c_1162_; lean_object* v___x_1163_; 
lean_dec(v_h__4_1154_);
v_v_1161_ = lean_ctor_get(v_x_1149_, 0);
lean_inc_ref(v_v_1161_);
lean_dec_ref_known(v_x_1149_, 1);
v_c_1162_ = lean_ctor_get(v_x_1150_, 0);
lean_inc(v_c_1162_);
lean_dec_ref_known(v_x_1150_, 1);
v___x_1163_ = lean_apply_2(v_h__3_1153_, v_v_1161_, v_c_1162_);
return v___x_1163_;
}
else
{
lean_object* v_v_1164_; lean_object* v_v_1165_; lean_object* v___x_1166_; 
lean_dec(v_h__3_1153_);
v_v_1164_ = lean_ctor_get(v_x_1149_, 0);
lean_inc_ref(v_v_1164_);
lean_dec_ref_known(v_x_1149_, 1);
v_v_1165_ = lean_ctor_get(v_x_1150_, 0);
lean_inc_ref(v_v_1165_);
lean_dec_ref_known(v_x_1150_, 1);
v___x_1166_ = lean_apply_2(v_h__4_1154_, v_v_1164_, v_v_1165_);
return v___x_1166_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_sub_match__1_splitter___redArg(lean_object* v_x_1167_, lean_object* v_x_1168_, lean_object* v_h__1_1169_, lean_object* v_h__2_1170_, lean_object* v_h__3_1171_, lean_object* v_h__4_1172_){
_start:
{
if (lean_obj_tag(v_x_1167_) == 0)
{
lean_dec(v_h__4_1172_);
lean_dec(v_h__2_1170_);
if (lean_obj_tag(v_x_1168_) == 0)
{
lean_object* v_c_1173_; lean_object* v_c_1174_; lean_object* v___x_1175_; 
lean_dec(v_h__3_1171_);
v_c_1173_ = lean_ctor_get(v_x_1167_, 0);
lean_inc(v_c_1173_);
lean_dec_ref_known(v_x_1167_, 1);
v_c_1174_ = lean_ctor_get(v_x_1168_, 0);
lean_inc(v_c_1174_);
lean_dec_ref_known(v_x_1168_, 1);
v___x_1175_ = lean_apply_2(v_h__1_1169_, v_c_1173_, v_c_1174_);
return v___x_1175_;
}
else
{
lean_object* v_c_1176_; lean_object* v_v_1177_; lean_object* v___x_1178_; 
lean_dec(v_h__1_1169_);
v_c_1176_ = lean_ctor_get(v_x_1167_, 0);
lean_inc(v_c_1176_);
lean_dec_ref_known(v_x_1167_, 1);
v_v_1177_ = lean_ctor_get(v_x_1168_, 0);
lean_inc_ref(v_v_1177_);
lean_dec_ref_known(v_x_1168_, 1);
v___x_1178_ = lean_apply_2(v_h__3_1171_, v_c_1176_, v_v_1177_);
return v___x_1178_;
}
}
else
{
lean_dec(v_h__3_1171_);
lean_dec(v_h__1_1169_);
if (lean_obj_tag(v_x_1168_) == 0)
{
lean_object* v_v_1179_; lean_object* v_c_1180_; lean_object* v___x_1181_; 
lean_dec(v_h__4_1172_);
v_v_1179_ = lean_ctor_get(v_x_1167_, 0);
lean_inc_ref(v_v_1179_);
lean_dec_ref_known(v_x_1167_, 1);
v_c_1180_ = lean_ctor_get(v_x_1168_, 0);
lean_inc(v_c_1180_);
lean_dec_ref_known(v_x_1168_, 1);
v___x_1181_ = lean_apply_2(v_h__2_1170_, v_v_1179_, v_c_1180_);
return v___x_1181_;
}
else
{
lean_object* v_v_1182_; lean_object* v_v_1183_; lean_object* v___x_1184_; 
lean_dec(v_h__2_1170_);
v_v_1182_ = lean_ctor_get(v_x_1167_, 0);
lean_inc_ref(v_v_1182_);
lean_dec_ref_known(v_x_1167_, 1);
v_v_1183_ = lean_ctor_get(v_x_1168_, 0);
lean_inc_ref(v_v_1183_);
lean_dec_ref_known(v_x_1168_, 1);
v___x_1184_ = lean_apply_2(v_h__4_1172_, v_v_1182_, v_v_1183_);
return v___x_1184_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_sub_match__1_splitter(lean_object* v_F_1185_, lean_object* v_motive_1186_, lean_object* v_x_1187_, lean_object* v_x_1188_, lean_object* v_h__1_1189_, lean_object* v_h__2_1190_, lean_object* v_h__3_1191_, lean_object* v_h__4_1192_){
_start:
{
if (lean_obj_tag(v_x_1187_) == 0)
{
lean_dec(v_h__4_1192_);
lean_dec(v_h__2_1190_);
if (lean_obj_tag(v_x_1188_) == 0)
{
lean_object* v_c_1193_; lean_object* v_c_1194_; lean_object* v___x_1195_; 
lean_dec(v_h__3_1191_);
v_c_1193_ = lean_ctor_get(v_x_1187_, 0);
lean_inc(v_c_1193_);
lean_dec_ref_known(v_x_1187_, 1);
v_c_1194_ = lean_ctor_get(v_x_1188_, 0);
lean_inc(v_c_1194_);
lean_dec_ref_known(v_x_1188_, 1);
v___x_1195_ = lean_apply_2(v_h__1_1189_, v_c_1193_, v_c_1194_);
return v___x_1195_;
}
else
{
lean_object* v_c_1196_; lean_object* v_v_1197_; lean_object* v___x_1198_; 
lean_dec(v_h__1_1189_);
v_c_1196_ = lean_ctor_get(v_x_1187_, 0);
lean_inc(v_c_1196_);
lean_dec_ref_known(v_x_1187_, 1);
v_v_1197_ = lean_ctor_get(v_x_1188_, 0);
lean_inc_ref(v_v_1197_);
lean_dec_ref_known(v_x_1188_, 1);
v___x_1198_ = lean_apply_2(v_h__3_1191_, v_c_1196_, v_v_1197_);
return v___x_1198_;
}
}
else
{
lean_dec(v_h__3_1191_);
lean_dec(v_h__1_1189_);
if (lean_obj_tag(v_x_1188_) == 0)
{
lean_object* v_v_1199_; lean_object* v_c_1200_; lean_object* v___x_1201_; 
lean_dec(v_h__4_1192_);
v_v_1199_ = lean_ctor_get(v_x_1187_, 0);
lean_inc_ref(v_v_1199_);
lean_dec_ref_known(v_x_1187_, 1);
v_c_1200_ = lean_ctor_get(v_x_1188_, 0);
lean_inc(v_c_1200_);
lean_dec_ref_known(v_x_1188_, 1);
v___x_1201_ = lean_apply_2(v_h__2_1190_, v_v_1199_, v_c_1200_);
return v___x_1201_;
}
else
{
lean_object* v_v_1202_; lean_object* v_v_1203_; lean_object* v___x_1204_; 
lean_dec(v_h__2_1190_);
v_v_1202_ = lean_ctor_get(v_x_1187_, 0);
lean_inc_ref(v_v_1202_);
lean_dec_ref_known(v_x_1187_, 1);
v_v_1203_ = lean_ctor_get(v_x_1188_, 0);
lean_inc_ref(v_v_1203_);
lean_dec_ref_known(v_x_1188_, 1);
v___x_1204_ = lean_apply_2(v_h__4_1192_, v_v_1202_, v_v_1203_);
return v___x_1204_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_instReprFpVar_repr_match__1_splitter___redArg(lean_object* v_x_1205_, lean_object* v_h__1_1206_, lean_object* v_h__2_1207_){
_start:
{
if (lean_obj_tag(v_x_1205_) == 0)
{
lean_object* v_c_1208_; lean_object* v___x_1209_; 
lean_dec(v_h__2_1207_);
v_c_1208_ = lean_ctor_get(v_x_1205_, 0);
lean_inc(v_c_1208_);
lean_dec_ref_known(v_x_1205_, 1);
v___x_1209_ = lean_apply_1(v_h__1_1206_, v_c_1208_);
return v___x_1209_;
}
else
{
lean_object* v_v_1210_; lean_object* v___x_1211_; 
lean_dec(v_h__1_1206_);
v_v_1210_ = lean_ctor_get(v_x_1205_, 0);
lean_inc_ref(v_v_1210_);
lean_dec_ref_known(v_x_1205_, 1);
v___x_1211_ = lean_apply_1(v_h__2_1207_, v_v_1210_);
return v___x_1211_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_instReprFpVar_repr_match__1_splitter(lean_object* v_F_1212_, lean_object* v_motive_1213_, lean_object* v_x_1214_, lean_object* v_h__1_1215_, lean_object* v_h__2_1216_){
_start:
{
if (lean_obj_tag(v_x_1214_) == 0)
{
lean_object* v_c_1217_; lean_object* v___x_1218_; 
lean_dec(v_h__2_1216_);
v_c_1217_ = lean_ctor_get(v_x_1214_, 0);
lean_inc(v_c_1217_);
lean_dec_ref_known(v_x_1214_, 1);
v___x_1218_ = lean_apply_1(v_h__1_1215_, v_c_1217_);
return v___x_1218_;
}
else
{
lean_object* v_v_1219_; lean_object* v___x_1220_; 
lean_dec(v_h__1_1215_);
v_v_1219_ = lean_ctor_get(v_x_1214_, 0);
lean_inc_ref(v_v_1219_);
lean_dec_ref_known(v_x_1214_, 1);
v___x_1220_ = lean_apply_1(v_h__2_1216_, v_v_1219_);
return v___x_1220_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_is__eq___redArg(lean_object* v_inst_1221_, lean_object* v_inst_1222_, lean_object* v_x_1223_, lean_object* v_x_1224_){
_start:
{
if (lean_obj_tag(v_x_1223_) == 0)
{
if (lean_obj_tag(v_x_1224_) == 0)
{
lean_object* v_c_1225_; lean_object* v_c_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; uint8_t v___x_1229_; lean_object* v___f_1230_; 
lean_dec_ref(v_inst_1221_);
v_c_1225_ = lean_ctor_get(v_x_1223_, 0);
lean_inc(v_c_1225_);
lean_dec_ref_known(v_x_1223_, 1);
v_c_1226_ = lean_ctor_get(v_x_1224_, 0);
lean_inc(v_c_1226_);
lean_dec_ref_known(v_x_1224_, 1);
v___x_1227_ = lean_apply_2(v_inst_1222_, v_c_1225_, v_c_1226_);
v___x_1228_ = lean_alloc_ctor(0, 0, 1);
v___x_1229_ = lean_unbox(v___x_1227_);
lean_ctor_set_uint8(v___x_1228_, 0, v___x_1229_);
v___f_1230_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_CS_pure___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1230_, 0, v___x_1228_);
return v___f_1230_;
}
else
{
lean_object* v_c_1231_; lean_object* v_v_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v_c_1231_ = lean_ctor_get(v_x_1223_, 0);
lean_inc(v_c_1231_);
lean_dec_ref_known(v_x_1223_, 1);
v_v_1232_ = lean_ctor_get(v_x_1224_, 0);
lean_inc_ref(v_v_1232_);
lean_dec_ref_known(v_x_1224_, 1);
v___x_1233_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__constant___redArg(v_c_1231_);
v___x_1234_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg(v_inst_1221_, v_inst_1222_, v___x_1233_, v_v_1232_);
return v___x_1234_;
}
}
else
{
if (lean_obj_tag(v_x_1224_) == 0)
{
lean_object* v_v_1235_; lean_object* v_c_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v_v_1235_ = lean_ctor_get(v_x_1223_, 0);
lean_inc_ref(v_v_1235_);
lean_dec_ref_known(v_x_1223_, 1);
v_c_1236_ = lean_ctor_get(v_x_1224_, 0);
lean_inc(v_c_1236_);
lean_dec_ref_known(v_x_1224_, 1);
v___x_1237_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__constant___redArg(v_c_1236_);
v___x_1238_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg(v_inst_1221_, v_inst_1222_, v___x_1237_, v_v_1235_);
return v___x_1238_;
}
else
{
lean_object* v_v_1239_; lean_object* v_v_1240_; lean_object* v___x_1241_; 
v_v_1239_ = lean_ctor_get(v_x_1223_, 0);
lean_inc_ref(v_v_1239_);
lean_dec_ref_known(v_x_1223_, 1);
v_v_1240_ = lean_ctor_get(v_x_1224_, 0);
lean_inc_ref(v_v_1240_);
lean_dec_ref_known(v_x_1224_, 1);
v___x_1241_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_is__eq___redArg(v_inst_1221_, v_inst_1222_, v_v_1239_, v_v_1240_);
return v___x_1241_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_is__eq(lean_object* v_F_1242_, lean_object* v_inst_1243_, lean_object* v_inst_1244_, lean_object* v_x_1245_, lean_object* v_x_1246_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_is__eq___redArg(v_inst_1243_, v_inst_1244_, v_x_1245_, v_x_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___redArg(lean_object* v_inst_1250_, lean_object* v_x_1251_, lean_object* v_x_1252_, lean_object* v_x_1253_){
_start:
{
if (lean_obj_tag(v_x_1251_) == 0)
{
if (lean_obj_tag(v_x_1252_) == 0)
{
lean_object* v___f_1254_; 
lean_dec_ref_known(v_x_1252_, 1);
lean_dec_ref_known(v_x_1251_, 1);
lean_dec_ref(v_inst_1250_);
v___f_1254_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___redArg___closed__0));
return v___f_1254_;
}
else
{
lean_object* v_c_1255_; lean_object* v_v_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v_c_1255_ = lean_ctor_get(v_x_1251_, 0);
lean_inc(v_c_1255_);
lean_dec_ref_known(v_x_1251_, 1);
v_v_1256_ = lean_ctor_get(v_x_1252_, 0);
lean_inc_ref(v_v_1256_);
lean_dec_ref_known(v_x_1252_, 1);
v___x_1257_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__constant___redArg(v_c_1255_);
v___x_1258_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal___redArg(v_inst_1250_, v___x_1257_, v_v_1256_, v_x_1253_);
return v___x_1258_;
}
}
else
{
if (lean_obj_tag(v_x_1252_) == 0)
{
lean_object* v_v_1259_; lean_object* v_c_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v_v_1259_ = lean_ctor_get(v_x_1251_, 0);
lean_inc_ref(v_v_1259_);
lean_dec_ref_known(v_x_1251_, 1);
v_c_1260_ = lean_ctor_get(v_x_1252_, 0);
lean_inc(v_c_1260_);
lean_dec_ref_known(v_x_1252_, 1);
v___x_1261_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__constant___redArg(v_c_1260_);
v___x_1262_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal___redArg(v_inst_1250_, v___x_1261_, v_v_1259_, v_x_1253_);
return v___x_1262_;
}
else
{
lean_object* v_v_1263_; lean_object* v_v_1264_; lean_object* v___x_1265_; 
v_v_1263_ = lean_ctor_get(v_x_1251_, 0);
lean_inc_ref(v_v_1263_);
lean_dec_ref_known(v_x_1251_, 1);
v_v_1264_ = lean_ctor_get(v_x_1252_, 0);
lean_inc_ref(v_v_1264_);
lean_dec_ref_known(v_x_1252_, 1);
v___x_1265_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__equal___redArg(v_inst_1250_, v_v_1263_, v_v_1264_, v_x_1253_);
return v___x_1265_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___redArg___boxed(lean_object* v_inst_1266_, lean_object* v_x_1267_, lean_object* v_x_1268_, lean_object* v_x_1269_){
_start:
{
lean_object* v_res_1270_; 
v_res_1270_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___redArg(v_inst_1266_, v_x_1267_, v_x_1268_, v_x_1269_);
lean_dec_ref(v_x_1269_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal(lean_object* v_F_1271_, lean_object* v_inst_1272_, lean_object* v_x_1273_, lean_object* v_x_1274_, lean_object* v_x_1275_){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___redArg(v_inst_1272_, v_x_1273_, v_x_1274_, v_x_1275_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___boxed(lean_object* v_F_1277_, lean_object* v_inst_1278_, lean_object* v_x_1279_, lean_object* v_x_1280_, lean_object* v_x_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal(v_F_1277_, v_inst_1278_, v_x_1279_, v_x_1280_, v_x_1281_);
lean_dec_ref(v_x_1281_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__not__equal___redArg(lean_object* v_inst_1283_, lean_object* v_x_1284_, lean_object* v_x_1285_, lean_object* v_x_1286_){
_start:
{
if (lean_obj_tag(v_x_1284_) == 0)
{
if (lean_obj_tag(v_x_1285_) == 0)
{
lean_object* v___f_1287_; 
lean_dec_ref_known(v_x_1285_, 1);
lean_dec_ref_known(v_x_1284_, 1);
lean_dec_ref(v_x_1286_);
lean_dec_ref(v_inst_1283_);
v___f_1287_ = ((lean_object*)(lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___redArg___closed__0));
return v___f_1287_;
}
else
{
lean_object* v_c_1288_; lean_object* v_v_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v_c_1288_ = lean_ctor_get(v_x_1284_, 0);
lean_inc(v_c_1288_);
lean_dec_ref_known(v_x_1284_, 1);
v_v_1289_ = lean_ctor_get(v_x_1285_, 0);
lean_inc_ref(v_v_1289_);
lean_dec_ref_known(v_x_1285_, 1);
v___x_1290_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__constant___redArg(v_c_1288_);
v___x_1291_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg(v_inst_1283_, v___x_1290_, v_v_1289_, v_x_1286_);
return v___x_1291_;
}
}
else
{
if (lean_obj_tag(v_x_1285_) == 0)
{
lean_object* v_v_1292_; lean_object* v_c_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v_v_1292_ = lean_ctor_get(v_x_1284_, 0);
lean_inc_ref(v_v_1292_);
lean_dec_ref_known(v_x_1284_, 1);
v_c_1293_ = lean_ctor_get(v_x_1285_, 0);
lean_inc(v_c_1293_);
lean_dec_ref_known(v_x_1285_, 1);
v___x_1294_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_new__constant___redArg(v_c_1293_);
v___x_1295_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg(v_inst_1283_, v___x_1294_, v_v_1292_, v_x_1286_);
return v___x_1295_;
}
else
{
lean_object* v_v_1296_; lean_object* v_v_1297_; lean_object* v___x_1298_; 
v_v_1296_ = lean_ctor_get(v_x_1284_, 0);
lean_inc_ref(v_v_1296_);
lean_dec_ref_known(v_x_1284_, 1);
v_v_1297_ = lean_ctor_get(v_x_1285_, 0);
lean_inc_ref(v_v_1297_);
lean_dec_ref_known(v_x_1285_, 1);
v___x_1298_ = lp_ark_x2dr1cs_ArkR1CS_AllocatedFp_conditional__enforce__not__equal___redArg(v_inst_1283_, v_v_1296_, v_v_1297_, v_x_1286_);
return v___x_1298_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__not__equal(lean_object* v_F_1299_, lean_object* v_inst_1300_, lean_object* v_x_1301_, lean_object* v_x_1302_, lean_object* v_x_1303_){
_start:
{
lean_object* v___x_1304_; 
v___x_1304_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__not__equal___redArg(v_inst_1300_, v_x_1301_, v_x_1302_, v_x_1303_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_instEqGadget___redArg(lean_object* v_inst_1305_, lean_object* v_inst_1306_){
_start:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
lean_inc_ref_n(v_inst_1305_, 2);
v___x_1307_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_FpVar_is__eq), 5, 3);
lean_closure_set(v___x_1307_, 0, lean_box(0));
lean_closure_set(v___x_1307_, 1, v_inst_1305_);
lean_closure_set(v___x_1307_, 2, v_inst_1306_);
v___x_1308_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__equal___boxed), 5, 2);
lean_closure_set(v___x_1308_, 0, lean_box(0));
lean_closure_set(v___x_1308_, 1, v_inst_1305_);
v___x_1309_ = lean_alloc_closure((void*)(lp_ark_x2dr1cs_ArkR1CS_FpVar_conditional__enforce__not__equal), 5, 2);
lean_closure_set(v___x_1309_, 0, lean_box(0));
lean_closure_set(v___x_1309_, 1, v_inst_1305_);
v___x_1310_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1307_);
lean_ctor_set(v___x_1310_, 1, v___x_1308_);
lean_ctor_set(v___x_1310_, 2, v___x_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs_ArkR1CS_FpVar_instEqGadget(lean_object* v_F_1311_, lean_object* v_inst_1312_, lean_object* v_inst_1313_){
_start:
{
lean_object* v___x_1314_; 
v___x_1314_ = lp_ark_x2dr1cs_ArkR1CS_FpVar_instEqGadget___redArg(v_inst_1312_, v_inst_1313_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_conditional__enforce__equal_match__1_splitter___redArg(lean_object* v_x_1315_, lean_object* v_x_1316_, lean_object* v_x_1317_, lean_object* v_h__1_1318_, lean_object* v_h__2_1319_, lean_object* v_h__3_1320_, lean_object* v_h__4_1321_){
_start:
{
if (lean_obj_tag(v_x_1315_) == 0)
{
lean_dec(v_h__4_1321_);
lean_dec(v_h__3_1320_);
if (lean_obj_tag(v_x_1316_) == 0)
{
lean_object* v_c_1322_; lean_object* v_c_1323_; lean_object* v___x_1324_; 
lean_dec(v_h__2_1319_);
v_c_1322_ = lean_ctor_get(v_x_1315_, 0);
lean_inc(v_c_1322_);
lean_dec_ref_known(v_x_1315_, 1);
v_c_1323_ = lean_ctor_get(v_x_1316_, 0);
lean_inc(v_c_1323_);
lean_dec_ref_known(v_x_1316_, 1);
v___x_1324_ = lean_apply_3(v_h__1_1318_, v_c_1322_, v_c_1323_, v_x_1317_);
return v___x_1324_;
}
else
{
lean_object* v_c_1325_; lean_object* v_v_1326_; lean_object* v___x_1327_; 
lean_dec(v_h__1_1318_);
v_c_1325_ = lean_ctor_get(v_x_1315_, 0);
lean_inc(v_c_1325_);
lean_dec_ref_known(v_x_1315_, 1);
v_v_1326_ = lean_ctor_get(v_x_1316_, 0);
lean_inc_ref(v_v_1326_);
lean_dec_ref_known(v_x_1316_, 1);
v___x_1327_ = lean_apply_3(v_h__2_1319_, v_c_1325_, v_v_1326_, v_x_1317_);
return v___x_1327_;
}
}
else
{
lean_dec(v_h__2_1319_);
lean_dec(v_h__1_1318_);
if (lean_obj_tag(v_x_1316_) == 0)
{
lean_object* v_v_1328_; lean_object* v_c_1329_; lean_object* v___x_1330_; 
lean_dec(v_h__4_1321_);
v_v_1328_ = lean_ctor_get(v_x_1315_, 0);
lean_inc_ref(v_v_1328_);
lean_dec_ref_known(v_x_1315_, 1);
v_c_1329_ = lean_ctor_get(v_x_1316_, 0);
lean_inc(v_c_1329_);
lean_dec_ref_known(v_x_1316_, 1);
v___x_1330_ = lean_apply_3(v_h__3_1320_, v_v_1328_, v_c_1329_, v_x_1317_);
return v___x_1330_;
}
else
{
lean_object* v_v_1331_; lean_object* v_v_1332_; lean_object* v___x_1333_; 
lean_dec(v_h__3_1320_);
v_v_1331_ = lean_ctor_get(v_x_1315_, 0);
lean_inc_ref(v_v_1331_);
lean_dec_ref_known(v_x_1315_, 1);
v_v_1332_ = lean_ctor_get(v_x_1316_, 0);
lean_inc_ref(v_v_1332_);
lean_dec_ref_known(v_x_1316_, 1);
v___x_1333_ = lean_apply_3(v_h__4_1321_, v_v_1331_, v_v_1332_, v_x_1317_);
return v___x_1333_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_FpVar_conditional__enforce__equal_match__1_splitter(lean_object* v_F_1334_, lean_object* v_motive_1335_, lean_object* v_x_1336_, lean_object* v_x_1337_, lean_object* v_x_1338_, lean_object* v_h__1_1339_, lean_object* v_h__2_1340_, lean_object* v_h__3_1341_, lean_object* v_h__4_1342_){
_start:
{
if (lean_obj_tag(v_x_1336_) == 0)
{
lean_dec(v_h__4_1342_);
lean_dec(v_h__3_1341_);
if (lean_obj_tag(v_x_1337_) == 0)
{
lean_object* v_c_1343_; lean_object* v_c_1344_; lean_object* v___x_1345_; 
lean_dec(v_h__2_1340_);
v_c_1343_ = lean_ctor_get(v_x_1336_, 0);
lean_inc(v_c_1343_);
lean_dec_ref_known(v_x_1336_, 1);
v_c_1344_ = lean_ctor_get(v_x_1337_, 0);
lean_inc(v_c_1344_);
lean_dec_ref_known(v_x_1337_, 1);
v___x_1345_ = lean_apply_3(v_h__1_1339_, v_c_1343_, v_c_1344_, v_x_1338_);
return v___x_1345_;
}
else
{
lean_object* v_c_1346_; lean_object* v_v_1347_; lean_object* v___x_1348_; 
lean_dec(v_h__1_1339_);
v_c_1346_ = lean_ctor_get(v_x_1336_, 0);
lean_inc(v_c_1346_);
lean_dec_ref_known(v_x_1336_, 1);
v_v_1347_ = lean_ctor_get(v_x_1337_, 0);
lean_inc_ref(v_v_1347_);
lean_dec_ref_known(v_x_1337_, 1);
v___x_1348_ = lean_apply_3(v_h__2_1340_, v_c_1346_, v_v_1347_, v_x_1338_);
return v___x_1348_;
}
}
else
{
lean_dec(v_h__2_1340_);
lean_dec(v_h__1_1339_);
if (lean_obj_tag(v_x_1337_) == 0)
{
lean_object* v_v_1349_; lean_object* v_c_1350_; lean_object* v___x_1351_; 
lean_dec(v_h__4_1342_);
v_v_1349_ = lean_ctor_get(v_x_1336_, 0);
lean_inc_ref(v_v_1349_);
lean_dec_ref_known(v_x_1336_, 1);
v_c_1350_ = lean_ctor_get(v_x_1337_, 0);
lean_inc(v_c_1350_);
lean_dec_ref_known(v_x_1337_, 1);
v___x_1351_ = lean_apply_3(v_h__3_1341_, v_v_1349_, v_c_1350_, v_x_1338_);
return v___x_1351_;
}
else
{
lean_object* v_v_1352_; lean_object* v_v_1353_; lean_object* v___x_1354_; 
lean_dec(v_h__3_1341_);
v_v_1352_ = lean_ctor_get(v_x_1336_, 0);
lean_inc_ref(v_v_1352_);
lean_dec_ref_known(v_x_1336_, 1);
v_v_1353_ = lean_ctor_get(v_x_1337_, 0);
lean_inc_ref(v_v_1353_);
lean_dec_ref_known(v_x_1337_, 1);
v___x_1354_ = lean_apply_3(v_h__4_1342_, v_v_1352_, v_v_1353_, v_x_1338_);
return v___x_1354_;
}
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_Boolean_lc_match__1_splitter___redArg(lean_object* v_x_1355_, lean_object* v_h__1_1356_, lean_object* v_h__2_1357_, lean_object* v_h__3_1358_){
_start:
{
if (lean_obj_tag(v_x_1355_) == 0)
{
uint8_t v_b_1359_; 
lean_dec(v_h__3_1358_);
v_b_1359_ = lean_ctor_get_uint8(v_x_1355_, 0);
lean_dec_ref_known(v_x_1355_, 0);
if (v_b_1359_ == 0)
{
lean_object* v___x_1360_; lean_object* v___x_1361_; 
lean_dec(v_h__2_1357_);
v___x_1360_ = lean_box(0);
v___x_1361_ = lean_apply_1(v_h__1_1356_, v___x_1360_);
return v___x_1361_;
}
else
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
lean_dec(v_h__1_1356_);
v___x_1362_ = lean_box(0);
v___x_1363_ = lean_apply_1(v_h__2_1357_, v___x_1362_);
return v___x_1363_;
}
}
else
{
lean_object* v_v_1364_; lean_object* v___x_1365_; 
lean_dec(v_h__2_1357_);
lean_dec(v_h__1_1356_);
v_v_1364_ = lean_ctor_get(v_x_1355_, 0);
lean_inc_ref(v_v_1364_);
lean_dec_ref_known(v_x_1355_, 1);
v___x_1365_ = lean_apply_1(v_h__3_1358_, v_v_1364_);
return v___x_1365_;
}
}
}
LEAN_EXPORT lean_object* lp_ark_x2dr1cs___private_ArkR1CS_R1csStd_Fields_Fp_0__ArkR1CS_Boolean_lc_match__1_splitter(lean_object* v_F_1366_, lean_object* v_motive_1367_, lean_object* v_x_1368_, lean_object* v_h__1_1369_, lean_object* v_h__2_1370_, lean_object* v_h__3_1371_){
_start:
{
if (lean_obj_tag(v_x_1368_) == 0)
{
uint8_t v_b_1372_; 
lean_dec(v_h__3_1371_);
v_b_1372_ = lean_ctor_get_uint8(v_x_1368_, 0);
lean_dec_ref_known(v_x_1368_, 0);
if (v_b_1372_ == 0)
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
lean_dec(v_h__2_1370_);
v___x_1373_ = lean_box(0);
v___x_1374_ = lean_apply_1(v_h__1_1369_, v___x_1373_);
return v___x_1374_;
}
else
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
lean_dec(v_h__1_1369_);
v___x_1375_ = lean_box(0);
v___x_1376_ = lean_apply_1(v_h__2_1370_, v___x_1375_);
return v___x_1376_;
}
}
else
{
lean_object* v_v_1377_; lean_object* v___x_1378_; 
lean_dec(v_h__2_1370_);
lean_dec(v_h__1_1369_);
v_v_1377_ = lean_ctor_get(v_x_1368_, 0);
lean_inc_ref(v_v_1377_);
lean_dec_ref_known(v_x_1368_, 1);
v___x_1378_ = lean_apply_1(v_h__3_1371_, v_v_1377_);
return v___x_1378_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_ark_x2dr1cs_ArkR1CS_R1csStd_Eq(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Tactic_LinearCombination(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ark_x2dr1cs_ArkR1CS_R1csStd_Fields_Fp(uint8_t builtin) {
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
res = initialize_ark_x2dr1cs_ArkR1CS_R1csStd_Eq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Tactic_LinearCombination(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
