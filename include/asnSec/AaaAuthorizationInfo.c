/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EeRaInterfacePdu"
 * 	found in "EeRaInterfacePdu.asn"
 * 	`asn1c -fcompound-names`
 */

#include "AaaAuthorizationInfo.h"

static int
memb_aaaUrl_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const UTF8String_t *st = (const UTF8String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = UTF8String_length(st);
	if((ssize_t)size < 0) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: UTF-8: broken encoding (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((size <= 511)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_aaaUrl_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_aaaUrl_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_AaaAuthorizationInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AaaAuthorizationInfo, aaaAuthorizationInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Opaque,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aaaAuthorizationInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct AaaAuthorizationInfo, aaaUrl),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTF8String,
		0,
		{ &asn_OER_memb_aaaUrl_constr_3, &asn_PER_memb_aaaUrl_constr_3,  memb_aaaUrl_constraint_1 },
		0, 0, /* No default value */
		"aaaUrl"
		},
};
static const int asn_MAP_AaaAuthorizationInfo_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_AaaAuthorizationInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AaaAuthorizationInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aaaAuthorizationInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* aaaUrl */
};
asn_SEQUENCE_specifics_t asn_SPC_AaaAuthorizationInfo_specs_1 = {
	sizeof(struct AaaAuthorizationInfo),
	offsetof(struct AaaAuthorizationInfo, _asn_ctx),
	asn_MAP_AaaAuthorizationInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_AaaAuthorizationInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AaaAuthorizationInfo = {
	"AaaAuthorizationInfo",
	"AaaAuthorizationInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_AaaAuthorizationInfo_tags_1,
	sizeof(asn_DEF_AaaAuthorizationInfo_tags_1)
		/sizeof(asn_DEF_AaaAuthorizationInfo_tags_1[0]), /* 1 */
	asn_DEF_AaaAuthorizationInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_AaaAuthorizationInfo_tags_1)
		/sizeof(asn_DEF_AaaAuthorizationInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AaaAuthorizationInfo_1,
	2,	/* Elements count */
	&asn_SPC_AaaAuthorizationInfo_specs_1	/* Additional specs */
};

