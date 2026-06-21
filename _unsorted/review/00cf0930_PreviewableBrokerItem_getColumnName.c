// addr: 0x00cf0930
// name: PreviewableBrokerItem_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * PreviewableBrokerItem_getColumnName(int columnIndex_) */

char * PreviewableBrokerItem_getColumnName(int columnIndex_)

{
  char *pcVar1;
  
                    /* Adds a CanPreviewItem column on top of InventorySaleItem_getColumnName. */
  if (columnIndex_ == 0x1d) {
    return "CanPreviewItem";
  }
  pcVar1 = InventorySaleItem_getColumnName(columnIndex_);
  return pcVar1;
}

