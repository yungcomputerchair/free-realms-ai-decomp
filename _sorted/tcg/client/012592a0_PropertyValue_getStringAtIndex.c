// addr: 0x012592a0
// name: PropertyValue_getStringAtIndex
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PropertyValue_getStringAtIndex(void * out, void * propertyList, int
   index_) */

void * PropertyValue_getStringAtIndex(void *out,void *propertyList,int index_)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the string at offset 0x58 from an indexed property/value record into
                       out. Evidence is caller 01264270 retrieving the 'MissionID' property and then
                       using this string to look up a deck by name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0165bb69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0132bc50(propertyList);
  *(undefined4 *)((int)out + 0x18) = 0xf;
  *(undefined4 *)((int)out + 0x14) = 0;
  *(undefined1 *)((int)out + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (out,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 (iVar1 + 0x58),0,0xffffffff);
  ExceptionList = local_c;
  return out;
}

