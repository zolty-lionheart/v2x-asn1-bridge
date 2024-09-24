/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CertManagementPdu"
 * 	found in "CertManagementPdu.asn"
 * 	`asn1c -fcompound-names`
 */

#include "CertManagementPdu.h"

static asn_oer_constraints_t asn_OER_type_CertManagementPdu_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_CertManagementPdu_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_CertManagementPdu_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CertManagementPdu, choice.compositeCrl),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompositeCrl,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"compositeCrl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CertManagementPdu, choice.certificateChain),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CertificateChain,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"certificateChain"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_CertManagementPdu_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* compositeCrl */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* certificateChain */
};
asn_CHOICE_specifics_t asn_SPC_CertManagementPdu_specs_1 = {
	sizeof(struct CertManagementPdu),
	offsetof(struct CertManagementPdu, _asn_ctx),
	offsetof(struct CertManagementPdu, present),
	sizeof(((struct CertManagementPdu *)0)->present),
	asn_MAP_CertManagementPdu_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CertManagementPdu = {
	"CertManagementPdu",
	"CertManagementPdu",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_CertManagementPdu_constr_1, &asn_PER_type_CertManagementPdu_constr_1, CHOICE_constraint },
	asn_MBR_CertManagementPdu_1,
	2,	/* Elements count */
	&asn_SPC_CertManagementPdu_specs_1	/* Additional specs */
};

