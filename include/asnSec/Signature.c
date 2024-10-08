/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecurityBaseDataTypes"
 * 	found in "SecurityBaseDataTypes.asn"
 * 	`asn1c -fcompound-names`
 */

#include "Signature.h"

static asn_oer_constraints_t asn_OER_type_Signature_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Signature_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Signature_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Signature, choice.ecdsaNistP256Signature),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EcdsaP256Signature,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ecdsaNistP256Signature"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Signature, choice.ecdsaBrainpoolP256r1Signature),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EcdsaP256Signature,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ecdsaBrainpoolP256r1Signature"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Signature, choice.ecdsaBrainpoolP384r1Signature),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EcdsaP384Signature,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ecdsaBrainpoolP384r1Signature"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Signature, choice.ecdsaNistP384Signature),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EcdsaP384Signature,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ecdsaNistP384Signature"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Signature, choice.sm2Signature),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EcsigP256Signature,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sm2Signature"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Signature_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ecdsaNistP256Signature */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ecdsaBrainpoolP256r1Signature */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ecdsaBrainpoolP384r1Signature */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ecdsaNistP384Signature */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* sm2Signature */
};
asn_CHOICE_specifics_t asn_SPC_Signature_specs_1 = {
	sizeof(struct Signature),
	offsetof(struct Signature, _asn_ctx),
	offsetof(struct Signature, present),
	sizeof(((struct Signature *)0)->present),
	asn_MAP_Signature_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Signature = {
	"Signature",
	"Signature",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Signature_constr_1, &asn_PER_type_Signature_constr_1, CHOICE_constraint },
	asn_MBR_Signature_1,
	5,	/* Elements count */
	&asn_SPC_Signature_specs_1	/* Additional specs */
};

