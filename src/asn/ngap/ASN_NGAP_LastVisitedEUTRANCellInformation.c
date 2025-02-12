/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#include "ASN_NGAP_LastVisitedEUTRANCellInformation.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_ASN_NGAP_LastVisitedEUTRANCellInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_LastVisitedEUTRANCellInformation = {
	"LastVisitedEUTRANCellInformation",
	"LastVisitedEUTRANCellInformation",
	&asn_OP_OCTET_STRING,
	asn_DEF_ASN_NGAP_LastVisitedEUTRANCellInformation_tags_1,
	sizeof(asn_DEF_ASN_NGAP_LastVisitedEUTRANCellInformation_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_LastVisitedEUTRANCellInformation_tags_1[0]), /* 1 */
	asn_DEF_ASN_NGAP_LastVisitedEUTRANCellInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_NGAP_LastVisitedEUTRANCellInformation_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_LastVisitedEUTRANCellInformation_tags_1[0]), /* 1 */
	{ 0, 0, OCTET_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

