/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EeRaInterfacePdu"
 * 	found in "EeRaInterfacePdu.asn"
 * 	`asn1c -fcompound-names`
 */

#include "ButterflyExpansion.h"

static int
memb_aes128_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sm4_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_aes128_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_aes128_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sm4_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_sm4_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ButterflyExpansion_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ButterflyExpansion_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ButterflyExpansion_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ButterflyExpansion, choice.aes128),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_aes128_constr_2, &asn_PER_memb_aes128_constr_2,  memb_aes128_constraint_1 },
		0, 0, /* No default value */
		"aes128"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ButterflyExpansion, choice.sm4),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_sm4_constr_4, &asn_PER_memb_sm4_constr_4,  memb_sm4_constraint_1 },
		0, 0, /* No default value */
		"sm4"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ButterflyExpansion_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aes128 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sm4 */
};
asn_CHOICE_specifics_t asn_SPC_ButterflyExpansion_specs_1 = {
	sizeof(struct ButterflyExpansion),
	offsetof(struct ButterflyExpansion, _asn_ctx),
	offsetof(struct ButterflyExpansion, present),
	sizeof(((struct ButterflyExpansion *)0)->present),
	asn_MAP_ButterflyExpansion_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ButterflyExpansion = {
	"ButterflyExpansion",
	"ButterflyExpansion",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ButterflyExpansion_constr_1, &asn_PER_type_ButterflyExpansion_constr_1, CHOICE_constraint },
	asn_MBR_ButterflyExpansion_1,
	2,	/* Elements count */
	&asn_SPC_ButterflyExpansion_specs_1	/* Additional specs */
};

