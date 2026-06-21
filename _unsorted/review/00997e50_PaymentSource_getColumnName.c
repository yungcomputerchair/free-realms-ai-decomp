// addr: 0x00997e50
// name: PaymentSource_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * PaymentSource_getColumnName(undefined4 param_1)

{
                    /* Maps payment source columns to PaymentSourceId, card type/span, CanDelete,
                       and AccountText. */
  switch(param_1) {
  case 0:
    return "PaymentSourceId";
  case 1:
    return "CardTypeId";
  case 2:
    return "CardSpan";
  case 3:
    return "CanDelete";
  case 4:
    return "AccountText";
  default:
    return "<error>";
  }
}

