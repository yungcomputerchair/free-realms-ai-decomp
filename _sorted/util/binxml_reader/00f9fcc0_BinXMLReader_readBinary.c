// addr: 0x00f9fcc0
// name: BinXMLReader_readBinary
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall BinXMLReader_readBinary(undefined4 *param_1,undefined4 param_2)

{
  uint size_;
  char cVar1;
  int iVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Reads the current element payload into a SCEA::BinXML::Binary, either copying
                       bytes into owned storage or aliasing a direct reader buffer. Evidence is
                       construction of SCEA::BinXML::Binary and consumption of remainingInElement
                       bytes. */
  puStack_8 = &LAB_0162aed9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  SCEA_BinXML_Binary_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  size_ = param_1[3];
  if (size_ != 0) {
    iVar2 = (**(code **)(*(int *)*param_1 + 0x10))();
    if (iVar2 == 0) {
      pvVar3 = Mem_Alloc(size_);
      cVar1 = (**(code **)(*(int *)*param_1 + 4))(pvVar3,param_1[3]);
      if (cVar1 != '\0') {
        param_1[1] = param_1[1] + param_1[3];
        param_1[3] = 0;
      }
      SCEA_BinXML_Streamable_setOwnedBuffer(pvVar3,size_);
    }
    else {
      SCEA_BinXML_Streamable_setBorrowedBuffer(iVar2,size_);
      *(undefined1 *)((int)param_1 + 0x11) = 0;
      cVar1 = (**(code **)(*(int *)*param_1 + 8))(param_1[3]);
      if (cVar1 != '\0') {
        param_1[1] = param_1[1] + param_1[3];
        param_1[3] = 0;
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
}

