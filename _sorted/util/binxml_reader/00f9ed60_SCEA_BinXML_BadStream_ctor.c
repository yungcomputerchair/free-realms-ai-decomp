// addr: 0x00f9ed60
// name: SCEA_BinXML_BadStream_ctor
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall SCEA_BinXML_BadStream_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a SCEA::BinXML::BadStream exception object and installs the
                       BadStream vtable. It is called immediately before __CxxThrowException in
                       primitive reader error paths. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162acd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00d837f0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = SCEA::BinXML::BadStream::vftable;
  ExceptionList = local_c;
  return param_1;
}

