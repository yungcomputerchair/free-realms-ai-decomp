// addr: 0x012f9f80
// name: DisplayAction_pushArg
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DisplayAction_pushArg(void * this, void * arg) */

void __thiscall DisplayAction_pushArg(void *this,void *arg)

{
  uint uVar1;
  void *dest;
  uint uVar2;
  uint local_8 [2];
  
                    /* Appends one 12-byte DisplayAction argument to the vector, constructing in
                       existing capacity when possible or delegating to the reallocation insert
                       helper. Evidence is the DisplayAction addArg caller and vector
                       begin/end/capacity arithmetic. */
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)((int)this + 8) - uVar1) / 0xc) <
      (uint)((int)(*(int *)((int)this + 0xc) - uVar1) / 0xc))) {
    dest = *(void **)((int)this + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    DisplayActionArg_constructRange(dest,1,arg);
    *(int *)((int)this + 8) = (int)dest + 0xc;
    return;
  }
  uVar2 = *(uint *)((int)this + 8);
  if (uVar2 < uVar1) {
    FUN_00d83c2d();
  }
  FUN_012f9e00(local_8,this,uVar2,arg);
  return;
}

