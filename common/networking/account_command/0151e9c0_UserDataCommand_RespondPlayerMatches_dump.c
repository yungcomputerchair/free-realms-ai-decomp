// addr: 0x0151e9c0
// name: UserDataCommand_RespondPlayerMatches_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x0151eaf4) */
/* WARNING: Removing unreachable block (ram,0x0151eb7a) */
/* WARNING: Removing unreachable block (ram,0x0151eb55) */
/* WARNING: Removing unreachable block (ram,0x0151eb69) */
/* Setting prototype: void UserDataCommand_RespondPlayerMatches_dump(void * this, void * writer) */

void __thiscall UserDataCommand_RespondPlayerMatches_dump(void *this,void *writer)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void **ppvVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  void *unaff_retaddr;
  void **ppvStack_2c;
  int *local_28;
  int *piStack_24;
  void *local_20;
  int *piStack_1c;
  int *piStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Appends the dump/serialization for UserDataCommand_RespondPlayerMatches,
                       writing the UserDataCommand base id plus multiple vectors and nested
                       serializable player-match object lists. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b8488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_28 = writer;
  local_20 = this;
  (**(code **)(*(int *)this + 8))(writer,DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  CommandArchive_serializeStringMember(this,writer);
  STLVector_string_serialize((int)this + 0xc);
  STLVector_string_serialize((int)this + 0x1c);
  STLVector_string_serialize((int)this + 0x2c);
  STLVector_int_serialize(&stack0xffffffcc,(int)this + 0x3c);
  STLVector_int_serialize(&stack0xffffffcc,(int)this + 0x4c);
  STLVector_int_serialize(&stack0xffffffcc,(int)this + 0x5c);
  STLVector_int_serialize(&stack0xffffffcc,(int)this + 0x6c);
  STLVector_int_serialize(&stack0xffffffcc,(int)this + 0x7c);
  STLVector_int_serialize(&stack0xffffffcc,(int)this + 0x8c);
  STLVector_int_serialize(&stack0xffffffcc,(int)this + 0x9c);
  STLVector_int_serialize(&stack0xffffffcc,(int)this + 0xbc);
  STLVector_int_serialize(&stack0xffffffcc,(int)this + 0xcc);
  if (*(int *)((int)this + 0xb0) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)((int)this + 0xb4) - *(int *)((int)this + 0xb0) >> 4;
  }
  Serializer_appendInteger(writer,uVar6);
  uVar6 = *(uint *)((int)this + 0xb0);
  if (*(uint *)((int)this + 0xb4) < uVar6) {
    FUN_00d83c2d();
  }
  while( true ) {
    uVar1 = *(uint *)((int)this + 0xb4);
    if (uVar1 < *(uint *)((int)this + 0xb0)) {
      FUN_00d83c2d();
    }
    if (uVar6 == uVar1) break;
    if (*(uint *)((int)this + 0xb4) <= uVar6) {
      FUN_00d83c2d();
    }
    STLVector_int_serialize(&stack0xffffffcc,uVar6);
    if (*(uint *)((int)this + 0xb4) <= uVar6) {
      FUN_00d83c2d();
    }
    uVar6 = uVar6 + 0x10;
  }
  Serializer_appendInteger(unaff_retaddr,*(uint *)((int)this + 8));
  pvStack_14 = (void *)0x0;
  puStack_8 = (undefined1 *)0x0;
  ppvStack_2c = (void **)((int)this + 0xdc);
  puStack_8 = (undefined1 *)0x0;
  pvStack_14 = (void *)0x0;
  piStack_18 = (int *)0x0;
  piStack_1c = (int *)0x0;
  FUN_0151e100(&stack0xffffffcc,&local_20,0,&ppvStack_2c);
  piVar7 = piStack_18;
  ppvStack_2c = (void **)((int)this + 0xec);
  if ((piStack_1c == (int *)0x0) ||
     ((uint)((int)pvStack_14 - (int)piStack_1c >> 2) <=
      (uint)((int)piStack_18 - (int)piStack_1c >> 2))) {
    if (piStack_18 < piStack_1c) {
      FUN_00d83c2d();
    }
    FUN_0151e100(&stack0xffffffcc,&local_20,piVar7,&ppvStack_2c);
  }
  else {
    *piStack_18 = (int)ppvStack_2c;
    piStack_18 = piStack_18 + 1;
  }
  piVar7 = piStack_1c;
  if (piStack_18 < piStack_1c) {
    FUN_00d83c2d();
  }
  ppvStack_2c = &local_20;
  local_28 = piVar7;
  while( true ) {
    piVar3 = piStack_18;
    piVar7 = local_28;
    ppvVar4 = ppvStack_2c;
    if (piStack_18 < piStack_1c) {
      FUN_00d83c2d();
    }
    if ((ppvVar4 == (void **)0x0) || (ppvVar4 != &local_20)) {
      FUN_00d83c2d();
    }
    if (piVar7 == piVar3) break;
    if (ppvVar4 == (void **)0x0) {
      FUN_00d83c2d();
    }
    if (ppvVar4[2] <= piVar7) {
      FUN_00d83c2d();
    }
    iVar2 = *piVar7;
    if (*(int *)(iVar2 + 4) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2;
    }
    Serializer_appendInteger(unaff_retaddr,uVar6);
    piVar7 = *(int **)(iVar2 + 4);
    if (*(int **)(iVar2 + 8) < piVar7) {
      FUN_00d83c2d();
    }
    while( true ) {
      piVar3 = *(int **)(iVar2 + 8);
      if (piVar3 < *(int **)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (piVar7 == piVar3) break;
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (*(int **)(iVar2 + 8) <= piVar7) {
        FUN_00d83c2d();
      }
      piVar3 = (int *)*piVar7;
      if (piVar3 == (int *)0x0) {
        Serializer_appendInteger(unaff_retaddr,1);
      }
      else {
        bVar5 = Serializer_appendInteger(unaff_retaddr,0);
        this = piStack_24;
        if (bVar5) {
          (**(code **)(*piVar3 + 0x28))(unaff_retaddr);
          this = piStack_24;
        }
      }
      if (*(int **)(iVar2 + 8) <= piVar7) {
        FUN_00d83c2d();
      }
      piVar7 = piVar7 + 1;
    }
    if (ppvStack_2c[2] <= local_28) {
      FUN_00d83c2d();
    }
    local_28 = local_28 + 1;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (piStack_1c == (int *)0x0) {
    piStack_1c = (int *)0x0;
    piStack_18 = (int *)0x0;
    pvStack_14 = (void *)0x0;
    (**(code **)(*(int *)this + 0xc))(unaff_retaddr);
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(piStack_1c);
}

