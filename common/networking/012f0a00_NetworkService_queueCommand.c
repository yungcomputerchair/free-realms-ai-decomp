// addr: 0x012f0a00
// name: NetworkService_queueCommand
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int NetworkService_queueCommand(void * this, void * command) */

int __thiscall NetworkService_queueCommand(void *this,void *command)

{
  uint uVar1;
  void *this_00;
  int iVar2;
  uint extraout_EAX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char **ppcVar6;
  uint extraout_EAX_00;
  undefined4 extraout_EAX_01;
  int *piVar7;
  uint unaff_EBX;
  undefined4 unaff_EDI;
  int iStack_60;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 local_4c [16];
  void *pvStack_3c;
  undefined1 local_38 [4];
  undefined1 local_34;
  uint uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes a NetworkCommand into a packet buffer, prepends size/header
                       fields, and appends it either to the active send buffer or pending buffer
                       depending on connection state. Evidence: invokes command virtual
                       serialize/identity methods and NetworkService_appendBuffer three times. */
  puStack_8 = &LAB_01673e90;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&iStack_60;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff90;
  ExceptionList = &local_c;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = 0;
  local_4 = 0;
  DisplayActionManager_ensureSingleton();
  iVar2 = ObjectWithField1c_hasValue(this_00);
  if ((char)iVar2 != '\0') {
    (**(code **)(*(int *)command + 0x4c))(local_38,uVar1);
  }
  PacketBuffer_init(local_4c);
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*(int *)command + 0x28))(local_4c);
  iStack_60 = PacketBuffer_getSize(auStack_50);
  Ordinal_8(iStack_60 + 0xc);
  if (*(int *)((int)this + 0x68) == 5) {
    piVar7 = (int *)((int)this + 0x5c);
    ppcVar6 = (char **)((int)this + 0x58);
  }
  else {
    piVar7 = (int *)((int)this + 100);
    ppcVar6 = (char **)((int)this + 0x60);
  }
  iVar2 = NetworkService_appendBuffer(ppcVar6,piVar7,&stack0xffffff98,4);
  if (iVar2 == 0) {
    (**(code **)(*(int *)command + 0x54))(auStack_58,&iStack_60,auStack_5c);
    uVar3 = Ordinal_8(unaff_EBX);
    uVar4 = Ordinal_8(unaff_EDI);
    uStack_1c = Ordinal_8(unaff_EDI);
    if (*(int *)((int)this + 0x68) == 5) {
      piVar7 = (int *)((int)this + 0x5c);
      ppcVar6 = (char **)((int)this + 0x58);
    }
    else {
      piVar7 = (int *)((int)this + 100);
      ppcVar6 = (char **)((int)this + 0x60);
    }
    local_24 = uVar3;
    local_20 = uVar4;
    iVar2 = NetworkService_appendBuffer(ppcVar6,piVar7,&local_24,0xc);
    if (iVar2 == 0) {
      puVar5 = PacketBuffer_identity(auStack_54);
      if (*(int *)((int)this + 0x68) == 5) {
        piVar7 = (int *)((int)this + 0x5c);
        ppcVar6 = (char **)((int)this + 0x58);
      }
      else {
        piVar7 = (int *)((int)this + 100);
        ppcVar6 = (char **)((int)this + 0x60);
      }
      iVar2 = NetworkService_appendBuffer(ppcVar6,piVar7,(void *)*puVar5,unaff_EBX);
      if (iVar2 == 0) {
        local_c = (void *)((uint)local_c._1_3_ << 8);
        RawBuffer_free(auStack_54);
        local_c = (void *)0xffffffff;
        if (uStack_28 < 0x10) {
          ExceptionList = pvStack_14;
          return CONCAT31((int3)((uint)extraout_EAX_01 >> 8),1);
        }
                    /* WARNING: Subroutine does not return */
        _free(pvStack_3c);
      }
      local_c = (void *)((uint)local_c._1_3_ << 8);
      RawBuffer_free(auStack_54);
      local_c = (void *)0xffffffff;
      uVar1 = extraout_EAX_00;
      if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_3c);
      }
      goto LAB_012f0af7;
    }
  }
  local_c = (void *)((uint)local_c & 0xffffff00);
  RawBuffer_free(auStack_54);
  local_c = (void *)0xffffffff;
  uVar1 = extraout_EAX;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_3c);
  }
LAB_012f0af7:
  ExceptionList = pvStack_14;
  return uVar1 & 0xffffff00;
}

