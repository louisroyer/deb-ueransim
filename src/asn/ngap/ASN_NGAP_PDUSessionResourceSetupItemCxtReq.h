/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_PDUSessionResourceSetupItemCxtReq_H_
#define	_ASN_NGAP_PDUSessionResourceSetupItemCxtReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_PDUSessionID.h"
#include "ASN_NGAP_NAS-PDU.h"
#include "ASN_NGAP_S-NSSAI.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_PDUSessionResourceSetupItemCxtReq */
typedef struct ASN_NGAP_PDUSessionResourceSetupItemCxtReq {
	ASN_NGAP_PDUSessionID_t	 pDUSessionID;
	ASN_NGAP_NAS_PDU_t	*nAS_PDU;	/* OPTIONAL */
	ASN_NGAP_S_NSSAI_t	 s_NSSAI;
	OCTET_STRING_t	 pDUSessionResourceSetupRequestTransfer;
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_PDUSessionResourceSetupItemCxtReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_PDUSessionResourceSetupItemCxtReq;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_PDUSessionResourceSetupItemCxtReq_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_PDUSessionResourceSetupItemCxtReq_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_PDUSessionResourceSetupItemCxtReq_H_ */
#include <asn_internal.h>
