// addr: 0x0139b2f0
// name: Card_collectArchetypesForType
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_collectArchetypesForType(void * this, void * outList, int
   archetypeType_) */

bool __thiscall Card_collectArchetypesForType(void *this,void *outList,int archetypeType_)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint container;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint value;
  int extraout_EAX;
  void *outIt;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *local_3c;
  void *local_38;
  undefined1 *puStack_34;
  undefined4 *local_28;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [4];
  int *piStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Looks up archetype ids for a card/type, appends resolved archetypes, and for
                       one type also queues related actions from those archetypes. It asserts each
                       archetype lookup succeeds. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01684ec8;
  local_c = ExceptionList;
  value = DAT_01b839d8 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_c;
  ArchetypeDB_getInstance();
  Card_getOrCreateArchetypeVector();
  outIt = (void *)FUN_01326fd0(&archetypeType_);
  puVar1 = *(undefined4 **)(extraout_EAX + 8);
  local_38 = outIt;
  if (puVar1 < *(undefined4 **)(extraout_EAX + 4)) {
    FUN_00d83c2d();
  }
  puVar9 = *(undefined4 **)(extraout_EAX + 4);
  if (*(undefined4 **)(extraout_EAX + 8) < puVar9) {
    FUN_00d83c2d();
  }
  do {
    local_28 = puVar9;
    if (extraout_EAX == 0) {
      FUN_00d83c2d();
    }
    if (puVar9 == puVar1) {
      ExceptionList = local_c;
      return true;
    }
    if (extraout_EAX == 0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(extraout_EAX + 8) <= puVar9) {
      FUN_00d83c2d();
    }
    piVar7 = (int *)ArchetypeDB_getArchetype(*puVar9,*(undefined4 *)((int)this + 0x5c));
    local_3c = piVar7;
    if (piVar7 == (int *)0x0) {
      FUN_012f5a60("archetype","..\\common\\common\\game\\Card.cpp",0x91b);
    }
    uVar2 = *(uint *)((int)outIt + 4);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)outIt + 0xc) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)outIt + 8) - uVar2) >> 2))) {
      container = *(uint *)((int)outIt + 8);
      if (container < uVar2) {
        FUN_00d83c2d();
      }
      UIntVector_insertOne(outIt,auStack_24,outIt,container,(int)&local_3c,value);
    }
    else {
      puVar3 = *(undefined4 **)((int)outIt + 8);
      *puVar3 = piVar7;
      *(undefined4 **)((int)outIt + 8) = puVar3 + 1;
    }
    if (archetypeType_ == 4) {
      piStack_18 = (int *)0x0;
      piStack_14 = (int *)0x0;
      uStack_10 = 0;
      uStack_4 = 0;
      (**(code **)(*piVar7 + 100))(auStack_1c);
      local_3c = piStack_14;
      if (piStack_14 < piStack_18) {
        FUN_00d83c2d();
      }
      piVar7 = piStack_18;
      if (piStack_14 < piStack_18) {
        FUN_00d83c2d();
      }
      puStack_34 = auStack_1c;
      while( true ) {
        puVar6 = puStack_34;
        if ((puStack_34 == (undefined1 *)0x0) || (puStack_34 != auStack_1c)) {
          FUN_00d83c2d();
        }
        if (piVar7 == local_3c) break;
        if (puVar6 == (undefined1 *)0x0) {
          FUN_00d83c2d();
        }
        if (*(int **)(puVar6 + 8) <= piVar7) {
          FUN_00d83c2d();
        }
        iVar4 = *(int *)((int)this + 0x48);
        iVar5 = *piVar7;
        uVar8 = PlayElement_getId();
        uVar8 = FUN_01322200(this,iVar5,uVar8);
        uVar8 = FUN_013221d0(uVar8);
        (**(code **)(iVar4 + 4))(uVar8);
        if (*(int **)(puStack_34 + 8) <= piVar7) {
          FUN_00d83c2d();
        }
        piVar7 = piVar7 + 1;
        outIt = local_38;
      }
      uStack_4 = 0xffffffff;
      if (piStack_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(piStack_18);
      }
      piStack_18 = (int *)0x0;
      piStack_14 = (int *)0x0;
      uStack_10 = 0;
      puVar9 = local_28;
    }
    if (*(undefined4 **)(extraout_EAX + 8) <= puVar9) {
      FUN_00d83c2d();
    }
    puVar9 = puVar9 + 1;
  } while( true );
}

