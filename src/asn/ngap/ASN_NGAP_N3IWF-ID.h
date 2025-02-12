/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_N3IWF_ID_H_
#define	_ASN_NGAP_N3IWF_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_N3IWF_ID_PR {
	ASN_NGAP_N3IWF_ID_PR_NOTHING,	/* No components present */
	ASN_NGAP_N3IWF_ID_PR_n3IWF_ID,
	ASN_NGAP_N3IWF_ID_PR_choice_Extensions
} ASN_NGAP_N3IWF_ID_PR;

/* Forward declarations */
struct ASN_NGAP_ProtocolIE_SingleContainer;

/* ASN_NGAP_N3IWF-ID */
typedef struct ASN_NGAP_N3IWF_ID {
	ASN_NGAP_N3IWF_ID_PR present;
	union ASN_NGAP_N3IWF_ID_u {
		BIT_STRING_t	 n3IWF_ID;
		struct ASN_NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_N3IWF_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_N3IWF_ID;
extern asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_N3IWF_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_N3IWF_ID_1[2];
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_N3IWF_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_N3IWF_ID_H_ */
#include <asn_internal.h>
