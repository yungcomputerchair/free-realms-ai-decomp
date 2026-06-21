// addr: 0x00ace4f0
// name: PromotionCodeData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * PromotionCodeData_getColumnName(undefined4 param_1)

{
                    /* Maps code/promotion-like record columns: Code, Title, Description,
                       ImageSetId, and TintId. */
  switch(param_1) {
  case 0:
    return "Code";
  case 1:
    return "Title";
  case 2:
    return "Description";
  case 3:
    return "ImageSetId";
  case 4:
    return "TintId";
  default:
    return "<error>";
  }
}

