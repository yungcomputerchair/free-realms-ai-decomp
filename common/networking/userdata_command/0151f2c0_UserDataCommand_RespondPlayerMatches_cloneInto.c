// addr: 0x0151f2c0
// name: UserDataCommand_RespondPlayerMatches_cloneInto
// subsystem: common/networking/userdata_command
// source (binary assert): common/networking/userdata_command/UserDataCommandRespondPlayerMatches.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: void UserDataCommand_RespondPlayerMatches_cloneInto(void * this, void *
   source) */

void __thiscall UserDataCommand_RespondPlayerMatches_cloneInto(void *this,void *source)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  void *value;
  void *source_00;
  void *pvVar5;
  void *this_00;
  undefined1 *vector;
  void *ownerVector;
  int *piStack_38;
  undefined4 *puStack_30;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [12];
  int *piStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clone-into/copy routine for UserDataCommand_RespondPlayerMatches: casts the
                       clone argument with RTTI, copies base and response fields, then clones
                       objects from two contained pointer vectors via virtual clone calls. Evidence:
                       RTTI descriptor for UserDataCommand_RespondPlayerMatches, assert string
                       "clone", and UserDataCommandRespondPlayerMatches.cpp line 0xb5. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b8548;
  local_c = ExceptionList;
  value = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffac);
  ExceptionList = &local_c;
  source_00 = (void *)FUN_00d8d382(source,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &UserDataCommand_RespondPlayerMatches::RTTI_Type_Descriptor,0);
  if (source_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\userdata_command\\UserDataCommandRespondPlayerMatches.cpp"
                 ,0xb5);
  }
  UserDataCommand_cloneInto(this,source_00);
  StdVector28_assign((int)this + 0xc);
  StdVector28_assign((int)this + 0x1c);
  StdVector28_assign((int)this + 0x2c);
  FUN_005f1e5c((int)this + 0x3c);
  FUN_005f1e5c((int)this + 0x4c);
  FUN_005f1e5c((int)this + 0x5c);
  FUN_005f1e5c((int)this + 0x6c);
  FUN_005f1e5c((int)this + 0x7c);
  FUN_005f1e5c((int)this + 0x8c);
  FUN_005f1e5c((int)this + 0x9c);
  StdVector16_assign((int)this + 0xac);
  piStack_18 = (int *)0x0;
  piStack_14 = (int *)0x0;
  uStack_10 = 0;
  uStack_4 = 0;
  source = (void *)((int)this + 0xdc);
  FUN_0151e190(&source);
  source = (void *)((int)this + 0xec);
  FUN_0151e190(&source);
  piStack_38 = piStack_18;
  if (piStack_14 < piStack_18) {
    FUN_00d83c2d();
  }
  do {
    piVar4 = piStack_14;
    if (piStack_14 < piStack_18) {
      FUN_00d83c2d();
    }
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (piStack_38 == piVar4) {
      uStack_4 = 0xffffffff;
      if (piStack_18 == (int *)0x0) {
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(piStack_18);
    }
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (piStack_14 <= piStack_38) {
      FUN_00d83c2d();
    }
    pvVar1 = (void *)*piStack_38;
    puStack_30 = *(undefined4 **)((int)pvVar1 + 4);
    if (*(undefined4 **)((int)pvVar1 + 8) < puStack_30) {
      FUN_00d83c2d();
    }
    while( true ) {
      puVar2 = *(undefined4 **)((int)pvVar1 + 8);
      if (puVar2 < *(undefined4 **)((int)pvVar1 + 4)) {
        FUN_00d83c2d();
      }
      if (pvVar1 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (puStack_30 == puVar2) break;
      if (pvVar1 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)((int)pvVar1 + 8) <= puStack_30) {
        FUN_00d83c2d();
      }
      pvVar5 = (void *)(**(code **)(*(int *)*puStack_30 + 0x74))();
      if (pvVar1 == (void *)((int)this + 0xdc)) {
        pvVar3 = *(void **)((int)source_00 + 0xe0);
        this_00 = (void *)((int)source_00 + 0xdc);
        if ((pvVar3 == (void *)0x0) ||
           ((uint)(*(int *)((int)source_00 + 0xe8) - (int)pvVar3 >> 2) <=
            (uint)(*(int *)((int)source_00 + 0xe4) - (int)pvVar3 >> 2))) {
          ownerVector = *(void **)((int)source_00 + 0xe4);
          source = pvVar5;
          if (ownerVector < pvVar3) {
            FUN_00d83c2d();
          }
          vector = auStack_2c;
LAB_0151f583:
          Vector_insertSingleAndReturnIterator(this_00,vector,this_00,ownerVector,&source,value);
        }
        else {
          puVar2 = *(undefined4 **)((int)source_00 + 0xe4);
          *puVar2 = pvVar5;
          *(undefined4 **)((int)source_00 + 0xe4) = puVar2 + 1;
          source = pvVar5;
        }
      }
      else if (pvVar1 == (void *)((int)this + 0xec)) {
        pvVar3 = *(void **)((int)source_00 + 0xf0);
        this_00 = (void *)((int)source_00 + 0xec);
        if ((pvVar3 == (void *)0x0) ||
           ((uint)(*(int *)((int)source_00 + 0xf8) - (int)pvVar3 >> 2) <=
            (uint)(*(int *)((int)source_00 + 0xf4) - (int)pvVar3 >> 2))) {
          ownerVector = *(void **)((int)source_00 + 0xf4);
          source = pvVar5;
          if (ownerVector < pvVar3) {
            FUN_00d83c2d();
          }
          vector = auStack_24;
          goto LAB_0151f583;
        }
        puVar2 = *(undefined4 **)((int)source_00 + 0xf4);
        *puVar2 = pvVar5;
        *(undefined4 **)((int)source_00 + 0xf4) = puVar2 + 1;
        source = pvVar5;
      }
      if (*(undefined4 **)((int)pvVar1 + 8) <= puStack_30) {
        FUN_00d83c2d();
      }
      puStack_30 = puStack_30 + 1;
    }
    if (piStack_14 <= piStack_38) {
      FUN_00d83c2d();
    }
    piStack_38 = piStack_38 + 1;
  } while( true );
}

