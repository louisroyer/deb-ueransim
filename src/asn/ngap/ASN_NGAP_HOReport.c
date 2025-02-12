/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#include "ASN_NGAP_HOReport.h"

#include "ASN_NGAP_NGRAN-CGI.h"
#include "ASN_NGAP_EUTRA-CGI.h"
#include "ASN_NGAP_UERLFReportContainer.h"
#include "ASN_NGAP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ASN_NGAP_sourcecellC_RNTI_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
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

static asn_per_constraints_t asn_PER_type_ASN_NGAP_handoverReportType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ASN_NGAP_sourcecellC_RNTI_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_NGAP_handoverReportType_value2enum_2[] = {
	{ 0,	12,	"ho-too-early" },
	{ 1,	16,	"ho-to-wrong-cell" },
	{ 2,	21,	"intersystem-ping-pong" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_NGAP_handoverReportType_enum2value_2[] = {
	1,	/* ho-to-wrong-cell(1) */
	0,	/* ho-too-early(0) */
	2	/* intersystem-ping-pong(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_NGAP_handoverReportType_specs_2 = {
	asn_MAP_ASN_NGAP_handoverReportType_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_NGAP_handoverReportType_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_NGAP_handoverReportType_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_handoverReportType_2 = {
	"handoverReportType",
	"handoverReportType",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_NGAP_handoverReportType_tags_2,
	sizeof(asn_DEF_ASN_NGAP_handoverReportType_tags_2)
		/sizeof(asn_DEF_ASN_NGAP_handoverReportType_tags_2[0]) - 1, /* 1 */
	asn_DEF_ASN_NGAP_handoverReportType_tags_2,	/* Same as above */
	sizeof(asn_DEF_ASN_NGAP_handoverReportType_tags_2)
		/sizeof(asn_DEF_ASN_NGAP_handoverReportType_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_ASN_NGAP_handoverReportType_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_NGAP_handoverReportType_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_NGAP_HOReport_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_HOReport, handoverReportType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_handoverReportType_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverReportType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_HOReport, handoverCause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverCause"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_HOReport, sourcecellCGI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_NGRAN_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourcecellCGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_HOReport, targetcellCGI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_NGRAN_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetcellCGI"
		},
	{ ATF_POINTER, 6, offsetof(struct ASN_NGAP_HOReport, reestablishmentcellCGI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_NGRAN_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reestablishmentcellCGI"
		},
	{ ATF_POINTER, 5, offsetof(struct ASN_NGAP_HOReport, sourcecellC_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_ASN_NGAP_sourcecellC_RNTI_constr_11,  memb_ASN_NGAP_sourcecellC_RNTI_constraint_1 },
		0, 0, /* No default value */
		"sourcecellC-RNTI"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_NGAP_HOReport, targetcellinE_UTRAN),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_EUTRA_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetcellinE-UTRAN"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_NGAP_HOReport, mobilityInformation),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_MobilityInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_NGAP_HOReport, uERLFReportContainer),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_UERLFReportContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uERLFReportContainer"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_NGAP_HOReport, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_ProtocolExtensionContainer_174P114,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_NGAP_HOReport_oms_1[] = { 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_ASN_NGAP_HOReport_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_NGAP_HOReport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* handoverReportType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* handoverCause */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sourcecellCGI */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* targetcellCGI */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* reestablishmentcellCGI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sourcecellC-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* targetcellinE-UTRAN */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* mobilityInformation */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* uERLFReportContainer */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_HOReport_specs_1 = {
	sizeof(struct ASN_NGAP_HOReport),
	offsetof(struct ASN_NGAP_HOReport, _asn_ctx),
	asn_MAP_ASN_NGAP_HOReport_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_ASN_NGAP_HOReport_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_HOReport = {
	"HOReport",
	"HOReport",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_NGAP_HOReport_tags_1,
	sizeof(asn_DEF_ASN_NGAP_HOReport_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_HOReport_tags_1[0]), /* 1 */
	asn_DEF_ASN_NGAP_HOReport_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_NGAP_HOReport_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_HOReport_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_NGAP_HOReport_1,
	10,	/* Elements count */
	&asn_SPC_ASN_NGAP_HOReport_specs_1	/* Additional specs */
};

