// addr: 0x00f9f4a0
// name: BinXMLReader_nextElement
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall BinXMLReader_nextElement(undefined4 *param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 unaff_EBX;
  uint uVar4;
  uint unaff_EDI;
  undefined1 *byteCount_;
  byte bVar6;
  uint uVar5;
  undefined1 uVar7;
  undefined1 auStack_11 [5];
  undefined1 *puStack_c;
  
                    /* Advances to the next binary XML element, returning/storing the element tag
                       and decoding the variable-length element payload size. It skips any unread
                       bytes from the prior element and uses binxml_reader.cpp PastEOS assertions
                       before throwing BadStream on truncated input. */
  if (*(char *)((int)param_1 + 0x11) != '\0') {
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    *param_2 = *(undefined1 *)(param_1 + 4);
    return;
  }
  if (param_1[3] != 0) {
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    cVar2 = (**(code **)(*(int *)*param_1 + 8))();
    if (cVar2 != '\0') {
      param_1[1] = param_1[1] + param_1[3];
      param_1[3] = 0;
    }
  }
  if ((((DAT_01cb4d50 != (int *)0x0) && (DAT_01b982ac != '\0')) && (param_1[2] != 0)) &&
     ((uint)param_1[2] < param_1[1] + 2)) {
    (**(code **)(*DAT_01cb4d50 + 4))(DAT_01cb4d50,&DAT_01b982b0,0x20,1,0x9f,".\\binxml_reader.cpp");
  }
  uVar5 = 0;
  (**(code **)(*(int *)*param_1 + 4))(auStack_11);
  *(char *)(param_1 + 4) = (char)((uint)unaff_EBX >> 0x18);
  byteCount_ = &stack0xffffffe6;
  (**(code **)(*(int *)*param_1 + 4))(byteCount_,1);
  piVar1 = DAT_01cb4d50;
  bVar6 = (byte)(uVar5 >> 0x10);
  uVar4 = (uint)bVar6;
  if (bVar6 < 0x80) {
    param_1[1] = param_1[1] + 2;
    param_1[3] = uVar4;
  }
  else if (bVar6 == 0xff) {
    if ((DAT_01cb4d50 != (int *)0x0) && (DAT_01b982ac != '\0')) {
      bVar3 = BinXMLReader_pastEOS(param_1,(void *)0x6,(uint)byteCount_);
      if (bVar3) {
        (**(code **)(*piVar1 + 4))
                  (piVar1,&DAT_01b982b0,0x20,1,0x9f,".\\binxml_reader.cpp",0x49,"!PastEOS(6)");
      }
    }
    bVar3 = BinXMLReader_pastEOS(param_1,(void *)0x6,(uint)byteCount_);
    if (bVar3) {
      SCEA_BinXML_BadStream_ctor();
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&stack0xffffffe4,&DAT_01a62e58);
    }
    (**(code **)(*(int *)*param_1 + 4))(&stack0xffffffe0,4);
    param_1[1] = param_1[1] + 6;
    param_1[3] = (unaff_EDI & 0xff0000 | unaff_EDI >> 0x10) >> 8 |
                 (unaff_EDI & 0xff00 | unaff_EDI << 0x10) << 8;
  }
  else {
    if ((DAT_01cb4d50 != (int *)0x0) && (DAT_01b982ac != '\0')) {
      bVar3 = BinXMLReader_pastEOS(param_1,(void *)0x3,(uint)byteCount_);
      if (bVar3) {
        (**(code **)(*piVar1 + 4))
                  (piVar1,&DAT_01b982b0,0x20,1,0x9f,".\\binxml_reader.cpp",0x50,"!PastEOS(3)");
        uVar4 = uVar5 >> 0x10 & 0xff;
      }
    }
    bVar3 = BinXMLReader_pastEOS(param_1,(void *)0x3,(uint)byteCount_);
    if (bVar3) {
      SCEA_BinXML_BadStream_ctor();
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&stack0xffffffe4,&DAT_01a62e58);
    }
    param_1[3] = (uVar4 & 0x7f) << 8;
    (**(code **)(*(int *)*param_1 + 4))(&stack0xffffffde,1);
    param_1[3] = param_1[3] | uVar5 >> 0x10 & 0xff;
    param_1[1] = param_1[1] + 3;
  }
  piVar1 = DAT_01cb4d50;
  uVar7 = (undefined1)(uVar5 >> 0x18);
  if ((DAT_01cb4d50 != (int *)0x0) && (DAT_01b982ac != '\0')) {
    bVar3 = BinXMLReader_pastEOS(param_1,(void *)param_1[3],(uint)byteCount_);
    if (bVar3) {
      (**(code **)(*piVar1 + 4))
                (piVar1,&DAT_01b982b0,0x20,1,0x9f,".\\binxml_reader.cpp",0x58,
                 "!PastEOS(m_remainingInElement)");
    }
  }
  if ((param_1[2] != 0) && ((uint)param_1[2] < (uint)(param_1[3] + param_1[1]))) {
    SCEA_BinXML_BadStream_ctor();
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&stack0xffffffe4,&DAT_01a62e58);
  }
  *puStack_c = uVar7;
  return;
}

