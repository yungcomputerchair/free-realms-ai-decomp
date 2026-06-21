// addr: 0x0149ded0
// name: ActionPlayNode_deserialize
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool ActionPlayNode_deserialize(void * this, void * deserializer) */

bool __thiscall ActionPlayNode_deserialize(void *this,void *deserializer)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  void *this_00;
  void *pvVar5;
  uint second_;
  uint uVar6;
  int unaff_EBP;
  int unaff_ESI;
  int local_40;
  int iStack_3c;
  void *pvStack_38;
  undefined1 auStack_34 [4];
  undefined1 uStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Deserializes an action-play query node: reads base data, validates/applies a
                       child node, reads an integer field, and handles old versions by reading
                       literal message text or newer versions by deserializing a component pointer,
                       followed by flags. Evidence is caller CWActionPlayNode_deserialize plus
                       QueryNode_validateAndApplyChild, Deserializer_readString/readInteger, and
                       ValueData_deserializeComponentPtr calls. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a40f3;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_40;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*(int *)this + 0x10))
                    (deserializer,&local_40,DAT_01b839d8 ^ (uint)&stack0xffffffb4);
  if (((cVar1 != '\0') && (bVar2 = QueryNode_validateAndApplyChild(this,deserializer), bVar2)) &&
     (bVar2 = Deserializer_readInteger(deserializer,&iStack_3c), bVar2)) {
    *(int *)((int)this + 0x10) = iStack_3c;
    if (unaff_ESI < 2) {
      uStack_1c = 0xf;
      uStack_20 = 0;
      uStack_30 = 0;
      local_c = (void *)0x0;
      bVar2 = Deserializer_readString(deserializer,auStack_34);
      if (!bVar2) {
        local_c = (void *)0xffffffff;
        FUN_0041f1d7();
        ExceptionList = pvStack_14;
        return false;
      }
      if (*(int *)((int)this + 0x14) == 0) {
        pvStack_38 = Mem_Alloc(0x1c);
        local_c._0_1_ = 1;
        if (pvStack_38 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = MessageText_ctor();
        }
        local_c = (void *)((uint)local_c._1_3_ << 8);
        *(undefined4 *)((int)this + 0x14) = uVar4;
      }
      this_00 = (void *)FUN_012a84b0();
      pvVar5 = (void *)FUN_012a84b0();
      second_ = get_field_30(pvVar5);
      pvVar5 = (void *)FUN_012a84b0();
      uVar6 = get_field_30(pvVar5);
      uVar6 = MessageDB_allocateMessageId(this_00,auStack_34,uVar6);
      set_pair_fields_4_8(*(void **)((int)this + 0x14),uVar6,second_);
      local_c = (void *)0xffffffff;
      FUN_0041f1d7();
    }
    else {
      bVar2 = ValueData_deserializeComponentPtr(deserializer,(void **)((int)this + 0x14));
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
    }
    if (2 < unaff_ESI) {
      bVar2 = Deserializer_readInteger(deserializer,(int *)&stack0xffffffbc);
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
      *(bool *)((int)this + 0x18) = unaff_EBP != 0;
    }
    if (3 < unaff_ESI) {
      bVar2 = Deserializer_readInteger(deserializer,&local_40);
      if (!bVar2) {
        ExceptionList = pvStack_14;
        return false;
      }
      *(bool *)((int)this + 0x19) = local_40 != 0;
    }
    uVar3 = (**(code **)(*(int *)this + 0x14))(deserializer);
    ExceptionList = pvStack_14;
    return (bool)uVar3;
  }
  ExceptionList = pvStack_14;
  return false;
}

