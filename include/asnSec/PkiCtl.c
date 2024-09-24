/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CTL"
 * 	found in "CTL.asn"
 * 	`asn1c -fcompound-names`
 */

#include "PkiCtl.h"

static asn_TYPE_member_t asn_MBR_PkiCtl_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PkiCtl, toBeSignedPkiCtl),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ToBeSignedPkiCtl,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"toBeSignedPkiCtl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PkiCtl, signature),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Signature,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signature"
		},
};
static const ber_tlv_tag_t asn_DEF_PkiCtl_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PkiCtl_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* toBeSignedPkiCtl */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* signature */
};
static asn_SEQUENCE_specifics_t asn_SPC_PkiCtl_specs_1 = {
	sizeof(struct PkiCtl),
	offsetof(struct PkiCtl, _asn_ctx),
	asn_MAP_PkiCtl_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PkiCtl = {
	"PkiCtl",
	"PkiCtl",
	&asn_OP_SEQUENCE,
	asn_DEF_PkiCtl_tags_1,
	sizeof(asn_DEF_PkiCtl_tags_1)
		/sizeof(asn_DEF_PkiCtl_tags_1[0]), /* 1 */
	asn_DEF_PkiCtl_tags_1,	/* Same as above */
	sizeof(asn_DEF_PkiCtl_tags_1)
		/sizeof(asn_DEF_PkiCtl_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PkiCtl_1,
	2,	/* Elements count */
	&asn_SPC_PkiCtl_specs_1	/* Additional specs */
};

