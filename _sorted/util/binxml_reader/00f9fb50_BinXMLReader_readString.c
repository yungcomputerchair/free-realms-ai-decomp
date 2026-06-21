// addr: 0x00f9fb50
// name: BinXMLReader_readString
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall BinXMLReader_readString(undefined4 *param_1,void *param_2)

{
  uint size_;
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Reads the current element payload into a SCEA::BinXML::String and verifies it
                       is NUL-terminated with ret.StrLen()+1 == len. Evidence is the explicit
                       binxml_reader.cpp assertion text ret.c_str()[len-1] == 0 && ret.StrLen()+1 ==
                       len. */
  puStack_8 = &LAB_0162ae99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  SCEA_BinXML_String_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
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
      SCEA_BinXML_Streamable_setOwnedBuffer(pvVar3,0);
    }
    else {
      SCEA_BinXML_Streamable_setBorrowedBuffer(iVar2,0);
      *(undefined1 *)((int)param_1 + 0x11) = 0;
      cVar1 = (**(code **)(*(int *)*param_1 + 8))(param_1[3]);
      if (cVar1 != '\0') {
        param_1[1] = param_1[1] + param_1[3];
        param_1[3] = 0;
      }
    }
  }
  iVar2 = 0;
  if ((DAT_01cb4d50 != (int *)0x0) && (DAT_01b982ac != '\0')) {
    if (*(char *)((int)param_2 + 4) == '\0') {
      iVar2 = *(int *)((int)param_2 + 0xc);
    }
    if ((*(char *)(iVar2 + -1 + size_) != '\0') ||
       (uVar4 = SCEA_BinXML_String_StrLen(param_2), uVar4 + 1 != size_)) {
      (**(code **)(*DAT_01cb4d50 + 4))
                (DAT_01cb4d50,&DAT_01b982b0,0x20,1,0x9f,".\\binxml_reader.cpp",0xd6,
                 "ret.c_str()[len-1] == 0 && ret.StrLen()+1 == len");
    }
  }
  iVar2 = SCEA_BinXML_String_c_str();
  if ((*(char *)(iVar2 + -1 + size_) == '\0') &&
     (uVar4 = SCEA_BinXML_String_StrLen(param_2), uVar4 + 1 == size_)) {
    ExceptionList = local_c;
    return param_2;
  }
  SCEA_BinXML_BadStream_ctor();
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(auStack_18,&DAT_01a62e58);
}

