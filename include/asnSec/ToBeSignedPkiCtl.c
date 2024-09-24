/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CTL"
 * 	found in "CTL.asn"
 * 	`asn1c -fcompound-names`
 */

#include "ToBeSignedPkiCtl.h"

static int
memb_version_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_version_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_version_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (1..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ToBeSignedPkiCtl_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ToBeSignedPkiCtl, version),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint8,
		0,
		{ &asn_OER_memb_version_constr_2, &asn_PER_memb_version_constr_2,  memb_version_constraint_1 },
		0, 0, /* No default value */
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ToBeSignedPkiCtl, issuer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IssuerIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"issuer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ToBeSignedPkiCtl, series),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"series"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ToBeSignedPkiCtl, issueDate),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Time32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"issueDate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ToBeSignedPkiCtl, nextPkiCtl),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Time32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextPkiCtl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ToBeSignedPkiCtl, pkiCertInfoList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SequenceOfPkiCertInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pkiCertInfoList"
		},
};
static const ber_tlv_tag_t asn_DEF_ToBeSignedPkiCtl_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ToBeSignedPkiCtl_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* version */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* issuer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* series */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* issueDate */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* nextPkiCtl */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* pkiCertInfoList */
};
asn_SEQUENCE_specifics_t asn_SPC_ToBeSignedPkiCtl_specs_1 = {
	sizeof(struct ToBeSignedPkiCtl),
	offsetof(struct ToBeSignedPkiCtl, _asn_ctx),
	asn_MAP_ToBeSignedPkiCtl_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ToBeSignedPkiCtl = {
	"ToBeSignedPkiCtl",
	"ToBeSignedPkiCtl",
	&asn_OP_SEQUENCE,
	asn_DEF_ToBeSignedPkiCtl_tags_1,
	sizeof(asn_DEF_ToBeSignedPkiCtl_tags_1)
		/sizeof(asn_DEF_ToBeSignedPkiCtl_tags_1[0]), /* 1 */
	asn_DEF_ToBeSignedPkiCtl_tags_1,	/* Same as above */
	sizeof(asn_DEF_ToBeSignedPkiCtl_tags_1)
		/sizeof(asn_DEF_ToBeSignedPkiCtl_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ToBeSignedPkiCtl_1,
	6,	/* Elements count */
	&asn_SPC_ToBeSignedPkiCtl_specs_1	/* Additional specs */
};

