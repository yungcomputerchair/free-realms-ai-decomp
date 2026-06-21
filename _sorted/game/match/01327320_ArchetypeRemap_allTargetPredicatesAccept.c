// addr: 0x01327320
// name: ArchetypeRemap_allTargetPredicatesAccept
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchetypeRemap_allTargetPredicatesAccept(void * this, void * target, int
   type_) */

bool __thiscall ArchetypeRemap_allTargetPredicatesAccept(void *this,void *target,int type_)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 local_8 [8];
  
                    /* Checks whether all resolved archetype target predicates for a type accept the
                       supplied object. It lazily populates archetype remap entries for types 2, 3,
                       and 4, then calls each predicate's virtual test at vtable+0x68. */
  if (type_ != 1) {
    if (*(char *)((int)this + 0x44) == '\0') {
      ArchetypeRemap_populateResolvedArchetypes(this,2);
      ArchetypeRemap_populateResolvedArchetypes(this,3);
      ArchetypeRemap_populateResolvedArchetypes(this,4);
      *(undefined1 *)((int)this + 0x44) = 1;
    }
    iVar1 = *(int *)((int)this + 0x3c);
    piVar6 = (int *)FUN_01323980(local_8,&type_);
    iVar2 = *piVar6;
    iVar3 = piVar6[1];
    if ((iVar2 == 0) || (iVar2 != (int)this + 0x38)) {
      FUN_00d83c2d();
    }
    if (iVar3 != iVar1) {
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (iVar3 == *(int *)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      puVar7 = *(undefined4 **)(iVar3 + 0x14);
      if ((puVar7 != (undefined4 *)0x0) &&
         (puVar4 = *(undefined4 **)(iVar3 + 0x18), (int)puVar4 - (int)puVar7 >> 2 != 0)) {
        if (puVar4 < puVar7) {
          FUN_00d83c2d();
        }
        puVar7 = *(undefined4 **)(iVar3 + 0x14);
        if (*(undefined4 **)(iVar3 + 0x18) < puVar7) {
          FUN_00d83c2d();
        }
        while( true ) {
          if (iVar3 == -0x10) {
            FUN_00d83c2d();
          }
          if (puVar7 == puVar4) break;
          if (iVar3 == -0x10) {
            FUN_00d83c2d();
          }
          if (*(undefined4 **)(iVar3 + 0x18) <= puVar7) {
            FUN_00d83c2d();
          }
          cVar5 = (**(code **)(*(int *)*puVar7 + 0x68))(target);
          if (cVar5 == '\0') {
            return false;
          }
          if (*(undefined4 **)(iVar3 + 0x18) <= puVar7) {
            FUN_00d83c2d();
          }
          puVar7 = puVar7 + 1;
        }
      }
    }
  }
  return true;
}

