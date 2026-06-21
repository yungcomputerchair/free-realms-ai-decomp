// addr: 0x007df740
// name: SCEA_BinXML_String_stackTemp_dtor
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void SCEA_BinXML_String_stackTemp_dtor(void) */

void SCEA_BinXML_String_stackTemp_dtor(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* SEH cleanup helper constructs/destructs a temporary
                       SCEA::BinXML::String/Streamable object and restores the exception list. The
                       function is referenced from many cleanup thunks and calls the Streamable
                       destructor helper. */
  puStack_8 = &LAB_01562f68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_00f9e6e0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

