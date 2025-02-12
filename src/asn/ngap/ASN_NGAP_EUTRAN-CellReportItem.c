/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#include "ASN_NGAP_EUTRAN-CellReportItem.h"

#include "ASN_NGAP_EUTRAN-RadioResourceStatus.h"
#include "ASN_NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_NGAP_EUTRAN_CellReportItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_EUTRAN_CellReportItem, eCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_EUTRA_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eCGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_EUTRAN_CellReportItem, eUTRAN_CompositeAvailableCapacityGroup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_EUTRAN_CompositeAvailableCapacityGroup,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRAN-CompositeAvailableCapacityGroup"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_NGAP_EUTRAN_CellReportItem, eUTRAN_NumberOfActiveUEs),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_EUTRAN_NumberOfActiveUEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRAN-NumberOfActiveUEs"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_NGAP_EUTRAN_CellReportItem, eUTRAN_NoofRRCConnections),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_NGRAN_NoofRRCConnections,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRAN-NoofRRCConnections"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_NGAP_EUTRAN_CellReportItem, eUTRAN_RadioResourceStatus),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_EUTRAN_RadioResourceStatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRAN-RadioResourceStatus"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_NGAP_EUTRAN_CellReportItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_ProtocolExtensionContainer_174P135,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_NGAP_EUTRAN_CellReportItem_oms_1[] = { 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_ASN_NGAP_EUTRAN_CellReportItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_NGAP_EUTRAN_CellReportItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eCGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eUTRAN-CompositeAvailableCapacityGroup */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eUTRAN-NumberOfActiveUEs */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* eUTRAN-NoofRRCConnections */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* eUTRAN-RadioResourceStatus */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_EUTRAN_CellReportItem_specs_1 = {
	sizeof(struct ASN_NGAP_EUTRAN_CellReportItem),
	offsetof(struct ASN_NGAP_EUTRAN_CellReportItem, _asn_ctx),
	asn_MAP_ASN_NGAP_EUTRAN_CellReportItem_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_ASN_NGAP_EUTRAN_CellReportItem_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_EUTRAN_CellReportItem = {
	"EUTRAN-CellReportItem",
	"EUTRAN-CellReportItem",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_NGAP_EUTRAN_CellReportItem_tags_1,
	sizeof(asn_DEF_ASN_NGAP_EUTRAN_CellReportItem_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_EUTRAN_CellReportItem_tags_1[0]), /* 1 */
	asn_DEF_ASN_NGAP_EUTRAN_CellReportItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_NGAP_EUTRAN_CellReportItem_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_EUTRAN_CellReportItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_NGAP_EUTRAN_CellReportItem_1,
	6,	/* Elements count */
	&asn_SPC_ASN_NGAP_EUTRAN_CellReportItem_specs_1	/* Additional specs */
};

