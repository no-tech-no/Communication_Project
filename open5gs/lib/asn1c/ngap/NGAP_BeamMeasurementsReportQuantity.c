/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r17.3.0/38413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#include "NGAP_BeamMeasurementsReportQuantity.h"

#include "NGAP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NGAP_rSRP_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NGAP_rSRQ_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NGAP_sINR_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NGAP_rSRP_value2enum_2[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NGAP_rSRP_enum2value_2[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_NGAP_rSRP_specs_2 = {
	asn_MAP_NGAP_rSRP_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NGAP_rSRP_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NGAP_rSRP_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NGAP_rSRP_2 = {
	"rSRP",
	"rSRP",
	&asn_OP_NativeEnumerated,
	asn_DEF_NGAP_rSRP_tags_2,
	sizeof(asn_DEF_NGAP_rSRP_tags_2)
		/sizeof(asn_DEF_NGAP_rSRP_tags_2[0]) - 1, /* 1 */
	asn_DEF_NGAP_rSRP_tags_2,	/* Same as above */
	sizeof(asn_DEF_NGAP_rSRP_tags_2)
		/sizeof(asn_DEF_NGAP_rSRP_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_rSRP_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NGAP_rSRP_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NGAP_rSRQ_value2enum_5[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NGAP_rSRQ_enum2value_5[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_NGAP_rSRQ_specs_5 = {
	asn_MAP_NGAP_rSRQ_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_NGAP_rSRQ_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NGAP_rSRQ_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NGAP_rSRQ_5 = {
	"rSRQ",
	"rSRQ",
	&asn_OP_NativeEnumerated,
	asn_DEF_NGAP_rSRQ_tags_5,
	sizeof(asn_DEF_NGAP_rSRQ_tags_5)
		/sizeof(asn_DEF_NGAP_rSRQ_tags_5[0]) - 1, /* 1 */
	asn_DEF_NGAP_rSRQ_tags_5,	/* Same as above */
	sizeof(asn_DEF_NGAP_rSRQ_tags_5)
		/sizeof(asn_DEF_NGAP_rSRQ_tags_5[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_rSRQ_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NGAP_rSRQ_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NGAP_sINR_value2enum_8[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NGAP_sINR_enum2value_8[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_NGAP_sINR_specs_8 = {
	asn_MAP_NGAP_sINR_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_NGAP_sINR_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NGAP_sINR_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NGAP_sINR_8 = {
	"sINR",
	"sINR",
	&asn_OP_NativeEnumerated,
	asn_DEF_NGAP_sINR_tags_8,
	sizeof(asn_DEF_NGAP_sINR_tags_8)
		/sizeof(asn_DEF_NGAP_sINR_tags_8[0]) - 1, /* 1 */
	asn_DEF_NGAP_sINR_tags_8,	/* Same as above */
	sizeof(asn_DEF_NGAP_sINR_tags_8)
		/sizeof(asn_DEF_NGAP_sINR_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_sINR_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NGAP_sINR_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NGAP_BeamMeasurementsReportQuantity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_BeamMeasurementsReportQuantity, rSRP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_rSRP_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"rSRP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_BeamMeasurementsReportQuantity, rSRQ),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_rSRQ_5,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"rSRQ"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_BeamMeasurementsReportQuantity, sINR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_sINR_8,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"sINR"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_BeamMeasurementsReportQuantity, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_11905P22,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_BeamMeasurementsReportQuantity_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_NGAP_BeamMeasurementsReportQuantity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_BeamMeasurementsReportQuantity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rSRP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rSRQ */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sINR */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_BeamMeasurementsReportQuantity_specs_1 = {
	sizeof(struct NGAP_BeamMeasurementsReportQuantity),
	offsetof(struct NGAP_BeamMeasurementsReportQuantity, _asn_ctx),
	asn_MAP_NGAP_BeamMeasurementsReportQuantity_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NGAP_BeamMeasurementsReportQuantity_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_BeamMeasurementsReportQuantity = {
	"BeamMeasurementsReportQuantity",
	"BeamMeasurementsReportQuantity",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_BeamMeasurementsReportQuantity_tags_1,
	sizeof(asn_DEF_NGAP_BeamMeasurementsReportQuantity_tags_1)
		/sizeof(asn_DEF_NGAP_BeamMeasurementsReportQuantity_tags_1[0]), /* 1 */
	asn_DEF_NGAP_BeamMeasurementsReportQuantity_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_BeamMeasurementsReportQuantity_tags_1)
		/sizeof(asn_DEF_NGAP_BeamMeasurementsReportQuantity_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_BeamMeasurementsReportQuantity_1,
	4,	/* Elements count */
	&asn_SPC_NGAP_BeamMeasurementsReportQuantity_specs_1	/* Additional specs */
};

