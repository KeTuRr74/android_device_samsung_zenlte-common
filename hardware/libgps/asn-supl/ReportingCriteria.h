/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-message-extensions"
 * 	found in "../ulp-version2-message-extensions.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_ReportingCriteria_H_
#define	_ReportingCriteria_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TimeWindow;

/* ReportingCriteria */
typedef struct ReportingCriteria {
	struct TimeWindow	*timeWindow	/* OPTIONAL */;
	long	*maxNumberofReports	/* OPTIONAL */;
	long	*minTimeInterval	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportingCriteria_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportingCriteria;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TimeWindow.h"

#endif	/* _ReportingCriteria_H_ */
#include <asn_internal.h>