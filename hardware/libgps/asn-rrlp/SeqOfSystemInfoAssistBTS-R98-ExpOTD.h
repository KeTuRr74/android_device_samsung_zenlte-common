/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SeqOfSystemInfoAssistBTS_R98_ExpOTD_H_
#define	_SeqOfSystemInfoAssistBTS_R98_ExpOTD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SystemInfoAssistBTS_R98_ExpOTD;

/* SeqOfSystemInfoAssistBTS-R98-ExpOTD */
typedef struct SeqOfSystemInfoAssistBTS_R98_ExpOTD {
	A_SEQUENCE_OF(struct SystemInfoAssistBTS_R98_ExpOTD) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOfSystemInfoAssistBTS_R98_ExpOTD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOfSystemInfoAssistBTS_R98_ExpOTD;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SystemInfoAssistBTS-R98-ExpOTD.h"

#endif	/* _SeqOfSystemInfoAssistBTS_R98_ExpOTD_H_ */
#include <asn_internal.h>
