/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LaMaInterfacePdu"
 * 	found in "LaMaInterfacePdu.asn"
 * 	`asn1c -fcompound-names`
 */

#include "IndividualLSInfo.h"

asn_TYPE_member_t asn_MBR_IndividualLSInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualLSInfo, i),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"i"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualLSInfo, lv),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LinkageValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lv"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IndividualLSInfo, ls),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityBaseDataTypes_LinkageSeed,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ls"
		},
};
static const ber_tlv_tag_t asn_DEF_IndividualLSInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IndividualLSInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* i */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lv */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ls */
};
asn_SEQUENCE_specifics_t asn_SPC_IndividualLSInfo_specs_1 = {
	sizeof(struct IndividualLSInfo),
	offsetof(struct IndividualLSInfo, _asn_ctx),
	asn_MAP_IndividualLSInfo_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IndividualLSInfo = {
	"IndividualLSInfo",
	"IndividualLSInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_IndividualLSInfo_tags_1,
	sizeof(asn_DEF_IndividualLSInfo_tags_1)
		/sizeof(asn_DEF_IndividualLSInfo_tags_1[0]), /* 1 */
	asn_DEF_IndividualLSInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_IndividualLSInfo_tags_1)
		/sizeof(asn_DEF_IndividualLSInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_IndividualLSInfo_1,
	3,	/* Elements count */
	&asn_SPC_IndividualLSInfo_specs_1	/* Additional specs */
};

