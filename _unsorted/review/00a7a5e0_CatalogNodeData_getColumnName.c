// addr: 0x00a7a5e0
// name: CatalogNodeData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char * CatalogNodeData_getColumnName(undefined4 param_1)

{
                    /* Returns catalog/tree node column labels such as ID, Parent Row, Node Type,
                       Name, counts, membership/currency flags, sale/new flags, and tag metadata. */
  switch(param_1) {
  case 0:
    return "ID";
  case 1:
    return "Parent Row";
  case 2:
    return "Node Type";
  case 3:
    return "Name";
  case 4:
    return "Description";
  case 5:
    return "Icon ID";
  case 6:
    return "Total Count";
  case 7:
    return "Owned Count";
  case 8:
    return "Members Only";
  case 9:
    return "Currency Type";
  case 10:
    return "On Sale";
  case 0xb:
    return "New";
  case 0xc:
    return "Tag String";
  case 0xd:
    return "Tag Color";
  default:
    return "<error>";
  }
}

