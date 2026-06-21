// addr: 0x00997fc0
// name: CreditCardType_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CreditCardType_getColumnName(undefined4 param_1)

{
                    /* Returns credit-card type metadata fields including card name/symbol/icons,
                       number and CSV lengths, and issuer/CSV requirements. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "CardName";
  case 2:
    return "CardSymbol";
  case 3:
    return "CardIconId";
  case 4:
    return "CsvHelperIconId";
  case 5:
    return "CardNumberLength";
  case 6:
    return "CsvLength";
  case 7:
    return "CsvRequired";
  case 8:
    return "CardIssuerRequired";
  default:
    return "<error>";
  }
}

