// addr: 0x00472b30
// name: FUN_00472b30
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: byte process_child_effect_records(int thisObj_, uint ctx_, undefined4 arg2_,
   undefined4 arg3_) */

byte process_child_effect_records(int thisObj_,uint ctx_,undefined4 arg2_,undefined4 arg3_)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int *piVar5;
  short *psVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  byte local_5;
  
                    /* Invokes two optional handler objects, then iterates a tree/list of child
                       records and for each inactive record scans 0x20-byte subrecords; subrecords
                       tagged 5 trigger FUN_00459906 and FUN_00463d4f and can update the result
                       byte. Class identity is not evident. */
  iVar1 = thisObj_;
  local_5 = 0;
  if (*(int **)(thisObj_ + 0x98) != (int *)0x0) {
    local_5 = (**(code **)(**(int **)(thisObj_ + 0x98) + 0x150))(arg2_,arg3_);
  }
  if (*(int **)(iVar1 + 0x9c) != (int *)0x0) {
    bVar3 = (**(code **)(**(int **)(iVar1 + 0x9c) + 0x150))(arg2_,arg3_);
    local_5 = local_5 | bVar3;
  }
  thisObj_ = *(int *)(iVar1 + 0x14);
  if (thisObj_ != 0) {
    FUN_00464a43(*(undefined4 *)(ctx_ + 4),ctx_);
    puVar8 = &local_18;
    FUN_0046d2d1(&local_10,&thisObj_);
    cVar4 = FUN_0045ca26(puVar8);
    if (cVar4 != '\0') {
      thisObj_ = *(int *)(iVar1 + 0x14);
      FUN_00470990(local_24,&thisObj_);
      iVar1 = *(int *)(iVar1 + 0x14);
      FUN_0045d62f(**(undefined4 **)(iVar1 + 0x8c),iVar1 + 0x88);
      local_10 = local_18;
      uVar7 = *(undefined4 *)(iVar1 + 0x8c);
      local_c = local_14;
      while( true ) {
        FUN_0045d62f(uVar7,iVar1 + 0x88);
        cVar4 = FUN_0045c9ee(&local_18);
        if (cVar4 != '\0') break;
        piVar5 = (int *)FUN_00464523();
        iVar2 = *piVar5;
        if ((*(char *)(iVar2 + 0x34) == '\0') && (ctx_ = 0, *(int *)(iVar2 + 0x38) != 0)) {
          thisObj_ = 0;
          do {
            psVar6 = (short *)(*(int *)(iVar2 + 0x3c) + thisObj_);
            if (*psVar6 == 5) {
              FUN_00459906(local_24,*(int *)(iVar2 + 0x44) + *(int *)(psVar6 + 2),psVar6[1]);
              FUN_00463d4f(arg2_,arg3_,&local_5);
            }
            ctx_ = ctx_ + 1;
            thisObj_ = thisObj_ + 0x20;
          } while (ctx_ < *(uint *)(iVar2 + 0x38));
        }
        FUN_0045dc8f();
        uVar7 = *(undefined4 *)(iVar1 + 0x8c);
      }
    }
  }
  return local_5;
}

