// addr: 0x00ce5ad0
// name: CollectionEntryColumn_getName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CollectionEntryColumn_getName(undefined4 param_1)

{
                    /* Returns labels for a collection-like entry with Id, Name, Description, image
                       set, tint, Type, and TypeDataId fields. */
  switch(param_1) {
  case 0:
    return "Id";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "Image Set Id";
  case 4:
    return "Tint Id";
  case 5:
    return "Type";
  case 6:
    return "TypeDataId";
  default:
    return "<error>";
  }
}

