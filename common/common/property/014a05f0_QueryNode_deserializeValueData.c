// addr: 0x014a05f0
// name: QueryNode_deserializeValueData
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool QueryNode_deserializeValueData(void * this, void * stream) */

bool __thiscall QueryNode_deserializeValueData(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 unaff_ESI;
  int unaff_EDI;
  int local_40;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_34 [4];
  undefined1 uStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Deserializes a query node/value-data object, including child validation,
                       strings, integers, and nullable component pointers. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a4368;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_40;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_40,DAT_01b839d8 ^ (uint)&stack0xffffffb8)
  ;
  if (((cVar1 != '\0') && (bVar2 = QueryNode_validateAndApplyChild(this,stream), bVar2)) &&
     (bVar2 = Deserializer_readInteger(stream,&iStack_38), bVar2)) {
    *(int *)((int)this + 0x10) = iStack_38;
    bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffbc);
    if (bVar2) {
      *(undefined4 *)((int)this + 0x14) = unaff_ESI;
      bVar2 = Deserializer_readInteger(stream,&local_40);
      if (bVar2) {
        *(int *)((int)this + 0x18) = local_40;
        bVar2 = ComponentFactory_deserializeNullableComponentPointer_A
                          (stream,(void *)((int)this + 0x1c));
        if (bVar2) {
          if (unaff_EDI < 2) {
            uStack_1c = 0xf;
            uStack_20 = 0;
            uStack_30 = 0;
            local_c = (void *)0x0;
            bVar2 = Deserializer_readString(stream,auStack_34);
            if (!bVar2) {
              local_c = (void *)0xffffffff;
              FUN_0041f1d7();
              ExceptionList = pvStack_14;
              return false;
            }
            local_c = (void *)0xffffffff;
            FUN_0041f1d7();
          }
          else {
            bVar2 = ValueData_deserializeComponentPtr(stream,(void **)((int)this + 0x20));
            if (!bVar2) {
              ExceptionList = pvStack_14;
              return false;
            }
          }
          bVar2 = Deserializer_readInteger(stream,&iStack_3c);
          if ((bVar2) &&
             ((*(bool *)((int)this + 0x24) = iStack_3c != 0, unaff_EDI < 3 ||
              (bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x28)), bVar2)))) {
            uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
            ExceptionList = pvStack_14;
            return (bool)uVar3;
          }
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return false;
}

