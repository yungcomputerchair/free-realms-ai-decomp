// addr: 0x00944fe0
// name: SelfObject_ParseFromBlob
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SelfObject_ParseFromBlob(void * selfObject, void * reader) */

void __thiscall SelfObject_ParseFromBlob(void *this,void *selfObject,void *reader)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *puVar5;
  void *reader_00;
  uint uVar6;
  void *pvVar7;
  uint value_;
  int iVar8;
  undefined1 *local_88;
  int iStack_84;
  undefined1 *puStack_80;
  undefined **ppuStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Main linear deserializer for the op-12 SendSelfToClient/ClientPcData blob:
                       reads launch ticket, guid, model/customization strings, transform
                       Vec4/quaternion, profile data, recipes, player titles, action bars,
                       pets/effects, acquaintances, and stats using the stream reader helpers.
                       Existing inline comment and direct Client_DispatchWorldPacket caller confirm
                       this role. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01593516;
  local_c = ExceptionList;
  reader_00 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff68);
  ExceptionList = &local_c;
  puVar3 = *(undefined4 **)((int)selfObject + 8);
  if (*(undefined4 **)((int)selfObject + 0xc) < puVar3 + 2) {
    *(undefined4 *)((int)this + 0x3c0) = 0;
    *(undefined4 *)((int)this + 0x3c4) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x3c0) = *puVar3;
    *(undefined4 *)((int)this + 0x3c4) = puVar3[1];
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 8;
  }
  iVar8 = 0;
  puVar3 = *(undefined4 **)((int)selfObject + 8);
  if (*(undefined4 **)((int)selfObject + 0xc) < puVar3 + 2) {
    *(undefined4 *)((int)this + 0x3c8) = 0;
    *(undefined4 *)((int)this + 0x3cc) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x3c8) = *puVar3;
    *(undefined4 *)((int)this + 0x3cc) = puVar3[1];
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 8;
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x35520) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x35520) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  piVar4 = *(int **)((int)selfObject + 0xc);
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (piVar4 < piVar1) {
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = piVar4;
LAB_009450d6:
    if (piVar4 < (int *)(*(int *)((int)selfObject + 8) + iVar8)) goto LAB_009450f2;
    SoeString_Assign();
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + iVar8;
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
    if (-1 < iVar8) goto LAB_009450d6;
LAB_009450f2:
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = piVar4;
  }
  piVar4 = *(int **)((int)selfObject + 0xc);
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (piVar4 < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = piVar4;
LAB_0094511a:
    if (piVar4 < (int *)(*(int *)((int)selfObject + 8) + iVar8)) goto LAB_00945136;
    SoeString_Assign();
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + iVar8;
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
    if (-1 < iVar8) goto LAB_0094511a;
LAB_00945136:
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = piVar4;
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x35524) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x35524) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x35528) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x35528) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  piVar4 = *(int **)((int)selfObject + 0xc);
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (piVar4 < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = piVar4;
LAB_009451b6:
    if (piVar4 < (int *)(*(int *)((int)selfObject + 8) + iVar8)) goto LAB_009451d2;
    SoeString_Assign();
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + iVar8;
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
    if (-1 < iVar8) goto LAB_009451b6;
LAB_009451d2:
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = piVar4;
  }
  piVar4 = *(int **)((int)selfObject + 0xc);
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (piVar4 < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = piVar4;
LAB_009451fa:
    if (piVar4 < (int *)(*(int *)((int)selfObject + 8) + iVar8)) goto LAB_00945216;
    SoeString_Assign();
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + iVar8;
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
    if (-1 < iVar8) goto LAB_009451fa;
LAB_00945216:
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = piVar4;
  }
  piVar4 = *(int **)((int)selfObject + 0xc);
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (piVar4 < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = piVar4;
LAB_0094523e:
    if ((int *)(*(int *)((int)selfObject + 8) + iVar8) <= piVar4) {
      SoeString_Assign();
      *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + iVar8;
      goto LAB_00945261;
    }
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
    if (-1 < iVar8) goto LAB_0094523e;
  }
  *(undefined1 *)((int)selfObject + 0x10) = 1;
  *(int **)((int)selfObject + 8) = piVar4;
LAB_00945261:
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x3552c) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x3552c) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x35530) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x35530) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x35534) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x35534) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x35538) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x35538) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x3553c) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x3553c) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  Stream_ReadVec4(selfObject,(float *)((int)this + 0x510));
  Stream_ReadVec4(selfObject,(float *)((int)this + 0x520));
  FUN_008e7290();
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x34f54) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x34f54) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  Stream_ReadU64(selfObject,(ulonglong *)((int)this + 0x34f58));
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x34f60) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x34f60) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x34f64) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x34f64) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  if (*(char **)((int)selfObject + 0xc) < *(char **)((int)selfObject + 8) + 1) {
    *(undefined1 *)((int)this + 0x460) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(bool *)((int)this + 0x460) = **(char **)((int)selfObject + 8) != '\0';
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 1;
  }
  if (*(char **)((int)selfObject + 0xc) < *(char **)((int)selfObject + 8) + 1) {
    *(undefined1 *)((int)this + 0x461) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(bool *)((int)this + 0x461) = **(char **)((int)selfObject + 8) != '\0';
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 1;
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x464) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x464) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  Stream_ReadBool(selfObject,(bool *)((int)this + 0x46a));
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x470) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x470) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x46c) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x46c) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  Stream_ReadU32(selfObject,(uint *)((int)this + 0x34f7c));
  Stream_ReadI32(selfObject,(int)this + 0x34f80);
  Stream_ReadI32(selfObject,(int)this + 0x45c);
  Stream_ReadBool(selfObject,(bool *)((int)this + 0x490));
  Stream_ReadI32(selfObject,(int)this + 0x47c);
  Stream_ReadI32(selfObject,(int)this + 0x480);
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (*(int **)((int)selfObject + 0xc) < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = *(int **)((int)selfObject + 0xc);
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
  }
  if (0 < iVar8) {
    do {
      ProfileItemState_deserializeAndApply(selfObject,(void **)0x0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  puVar2 = *(uint **)((int)selfObject + 8) + 1;
  if (*(uint **)((int)selfObject + 0xc) < puVar2) {
    uVar6 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(uint **)((int)selfObject + 8) = *(uint **)((int)selfObject + 0xc);
  }
  else {
    uVar6 = **(uint **)((int)selfObject + 8);
    *(uint **)((int)selfObject + 8) = puVar2;
  }
  ActionBarMap_findByIdAndSelect((void *)((int)this + 0x494),uVar6);
  iVar8 = *(int *)((int)this + 0x4c4);
  while (iVar8 != 0) {
    FUN_008bf2b0();
    iVar8 = *(int *)((int)this + 0x4c4);
  }
  puVar3 = *(undefined4 **)((int)selfObject + 8) + 1;
  if (*(undefined4 **)((int)selfObject + 0xc) < puVar3) {
    local_88 = (undefined1 *)0x0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 **)((int)selfObject + 8) = *(undefined4 **)((int)selfObject + 0xc);
  }
  else {
    local_88 = (undefined1 *)**(undefined4 **)((int)selfObject + 8);
    *(undefined4 **)((int)selfObject + 8) = puVar3;
  }
  iVar8 = 0;
  if (0 < (int)local_88) {
    do {
      if (*(char *)((int)selfObject + 0x10) != '\0') break;
      puVar5 = *(uint **)((int)selfObject + 0xc);
      puVar2 = *(uint **)((int)selfObject + 8) + 1;
      if (puVar5 < puVar2) {
        uVar6 = 0;
        *(undefined1 *)((int)selfObject + 0x10) = 1;
        *(uint **)((int)selfObject + 8) = puVar5;
      }
      else {
        uVar6 = **(uint **)((int)selfObject + 8);
        *(uint **)((int)selfObject + 8) = puVar2;
      }
      puVar2 = *(uint **)((int)selfObject + 8) + 1;
      if (puVar5 < puVar2) {
        value_ = 0;
        *(undefined1 *)((int)selfObject + 0x10) = 1;
        *(uint **)((int)selfObject + 8) = puVar5;
      }
      else {
        value_ = **(uint **)((int)selfObject + 8);
        *(uint **)((int)selfObject + 8) = puVar2;
      }
      ProfileTypeEntryMap_setValue((void *)((int)this + 0x494),uVar6,value_);
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_88);
  }
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (*(int **)((int)selfObject + 0xc) < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = *(int **)((int)selfObject + 0xc);
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
  }
  if (0 < iVar8) {
    do {
      puStack_80 = Mem_Alloc(400);
      uStack_4 = 0;
      if (puStack_80 != (void *)0x0) {
        FUN_0091c7e0();
      }
      uStack_4 = 0xffffffff;
      FUN_009099d0();
      FUN_00993a20();
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  ProfileItemClassDataMap_deserialize((void *)((int)this + 0x35748),selfObject);
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x458) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x458) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  FUN_00940c60();
  FUN_00940e60();
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (*(int **)((int)selfObject + 0xc) < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = *(int **)((int)selfObject + 0xc);
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
  }
  if (*(int *)((int)this + 0x34fb4) < iVar8) {
    FUN_008d4830();
  }
  if (0 < iVar8) {
    do {
      AcquaintanceData_ctor(auStack_4c);
      uStack_4 = 1;
      FUN_008e73b0();
      ClientEffectList_insertSorted(this,auStack_4c);
      uStack_4 = 0xffffffff;
      FUN_008ca450();
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (*(int **)((int)selfObject + 0xc) < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = *(int **)((int)selfObject + 0xc);
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
  }
  if (0 < iVar8) {
    do {
      RecipeData_ctor(auStack_4c);
      uStack_4 = 2;
      ProfileItem_deserialize(auStack_4c,selfObject);
      FUN_00a12780();
      uStack_4 = 0xffffffff;
      RecipeData_dtor(auStack_4c);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_6c = 0;
  uStack_4 = 3;
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (*(int **)((int)selfObject + 0xc) < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = *(int **)((int)selfObject + 0xc);
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
  }
  if (0 < iVar8) {
    do {
      puStack_80 = Mem_Alloc(0x130);
      uStack_4._0_1_ = 4;
      if (puStack_80 == (void *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)FUN_008fdc70();
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      SelfObject_ClientPcData_deserialize(pvVar7,selfObject);
      FUN_008e46d0();
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (*(int **)((int)selfObject + 0xc) < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = *(int **)((int)selfObject + 0xc);
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
  }
  Stream_ReadU64(selfObject,(ulonglong *)&local_88);
  puStack_80 = &stack0xffffff5c;
  PetInventoryManager_registerDataSources
            ((void *)((int)this + 0x19a60),&uStack_6c,this,iVar8,(int)local_88,iStack_84);
  ppuStack_7c = SoeUtil::List<PacketMountInfo,-1>::vftable;
  uStack_70 = 0;
  iStack_78 = 0;
  uStack_74 = 0;
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (*(int **)((int)selfObject + 0xc) < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = *(int **)((int)selfObject + 0xc);
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
  }
  if (0 < iVar8) {
    do {
      FUN_008e4720();
      FUN_008e74c0();
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00b05600();
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (*(int **)((int)selfObject + 0xc) < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = *(int **)((int)selfObject + 0xc);
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
  }
  if (0 < iVar8) {
    do {
      puVar3 = *(undefined4 **)((int)selfObject + 8) + 1;
      if (*(undefined4 **)((int)selfObject + 0xc) < puVar3) {
        pvVar7 = (void *)0x0;
        *(undefined1 *)((int)selfObject + 0x10) = 1;
        *(undefined4 **)((int)selfObject + 8) = *(undefined4 **)((int)selfObject + 0xc);
      }
      else {
        pvVar7 = (void *)**(undefined4 **)((int)selfObject + 8);
        *(undefined4 **)((int)selfObject + 8) = puVar3;
      }
      ActionBar_GetOrCreateById(this,pvVar7,(uint)reader_00);
      FUN_0091a9b0();
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00909fd0();
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (*(int **)((int)selfObject + 0xc) < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = *(int **)((int)selfObject + 0xc);
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
  }
  if (0 < iVar8) {
    do {
      uVar6 = *(int *)((int)selfObject + 8) + 4;
      if (*(uint *)((int)selfObject + 0xc) < uVar6) {
        *(undefined1 *)((int)selfObject + 0x10) = 1;
        *(uint *)((int)selfObject + 8) = *(uint *)((int)selfObject + 0xc);
      }
      else {
        *(uint *)((int)selfObject + 8) = uVar6;
      }
      FUN_00a12820();
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (*(int **)((int)selfObject + 0xc) < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = *(int **)((int)selfObject + 0xc);
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
  }
  if (0 < iVar8) {
    do {
      puVar2 = *(uint **)((int)selfObject + 8) + 1;
      if (*(uint **)((int)selfObject + 0xc) < puVar2) {
        uVar6 = 0;
        *(undefined1 *)((int)selfObject + 0x10) = 1;
        *(uint **)((int)selfObject + 8) = *(uint **)((int)selfObject + 0xc);
      }
      else {
        uVar6 = **(uint **)((int)selfObject + 8);
        *(uint **)((int)selfObject + 8) = puVar2;
      }
      ClientEffectMap_getOrCreateById(this,uVar6,selfObject);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00913850();
  piVar1 = *(int **)((int)selfObject + 8) + 1;
  if (*(int **)((int)selfObject + 0xc) < piVar1) {
    iVar8 = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(int **)((int)selfObject + 8) = *(int **)((int)selfObject + 0xc);
  }
  else {
    iVar8 = **(int **)((int)selfObject + 8);
    *(int **)((int)selfObject + 8) = piVar1;
  }
  if (0 < iVar8) {
    do {
      puVar3 = *(undefined4 **)((int)selfObject + 8) + 1;
      if (*(undefined4 **)((int)selfObject + 0xc) < puVar3) {
        local_88 = (undefined1 *)0x0;
        *(undefined1 *)((int)selfObject + 0x10) = 1;
        *(undefined4 **)((int)selfObject + 8) = *(undefined4 **)((int)selfObject + 0xc);
      }
      else {
        local_88 = (undefined1 *)**(undefined4 **)((int)selfObject + 8);
        *(undefined4 **)((int)selfObject + 8) = puVar3;
      }
      puStack_80 = local_88;
      pvVar7 = (void *)FUN_008fae60();
      Stream_ReadVariantIntOrFloat(pvVar7,selfObject,reader_00);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_0093f950();
  PlayerTitleDataMap_deserialize((void *)((int)this + 0x1d328),selfObject);
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x34f6c) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x34f6c) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
    if (NAN(*(float *)((int)this + 0x34f6c))) {
      *(undefined1 *)((int)selfObject + 0x11) = 1;
    }
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x34f70) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x34f70) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  if (*(undefined4 **)((int)selfObject + 0xc) < *(undefined4 **)((int)selfObject + 8) + 1) {
    *(undefined4 *)((int)this + 0x34f74) = 0;
    *(undefined1 *)((int)selfObject + 0x10) = 1;
    *(undefined4 *)((int)selfObject + 8) = *(undefined4 *)((int)selfObject + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x34f74) = **(undefined4 **)((int)selfObject + 8);
    *(int *)((int)selfObject + 8) = *(int *)((int)selfObject + 8) + 4;
  }
  Stream_ReadThreeU32TwoU64Collection(selfObject,(void *)((int)this + 0x10));
  if ((*(char *)((int)selfObject + 0x10) != '\0') ||
     (*(int *)((int)selfObject + 8) - *(int *)selfObject < *(int *)((int)selfObject + 4))) {
    FUN_006ffc90();
  }
  FUN_00a15730();
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  ppuStack_7c = SoeUtil::List<PacketMountInfo,-1>::vftable;
  while (iStack_78 != 0) {
    FUN_008fa8f0();
  }
  ExceptionList = local_c;
  return;
}

