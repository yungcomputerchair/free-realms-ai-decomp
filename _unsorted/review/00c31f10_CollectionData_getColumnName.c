// addr: 0x00c31f10
// name: CollectionData_getColumnName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * CollectionData_getColumnName(void * this, int columnIndex_) */

char * __thiscall CollectionData_getColumnName(void *this,int columnIndex_)

{
  int iVar1;
  
                    /* Returns collection table columns through Collection Category ID, and for
                       valid higher dynamic entry columns returns 'Entry Collected'. */
  switch(columnIndex_) {
  case 0:
    return "Collection ID";
  case 1:
    return "Name";
  case 2:
    return "Description";
  case 3:
    return "Image ID";
  case 4:
    return "Unused";
  case 5:
    return "Unused2";
  case 6:
    return "Entry Count";
  case 7:
    return "Image Tint Value";
  case 8:
    return "Collection Category ID";
  }
  if (8 < (uint)columnIndex_) {
    iVar1 = (*(code *)**(undefined4 **)this)();
    if (columnIndex_ <= iVar1) {
      return "Entry Collected";
    }
  }
  return "<error>";
}

