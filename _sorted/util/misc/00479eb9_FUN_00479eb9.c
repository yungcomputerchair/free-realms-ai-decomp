// addr: 0x00479eb9
// name: FUN_00479eb9
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void destroy_graphics_interface_impl(undefined4 * this) */

void __fastcall destroy_graphics_interface_impl(undefined4 *this)

{
  int *piVar1;
  undefined1 local_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
                    /* Destructor-like cleanup for a GInterface-derived graphics object: flushes
                       queued items, releases reference-counted members, destroys
                       vectors/containers, and restores GInterface vtable. Exact derived class is
                       not evident. */
  *this = &PTR_FUN_01765140;
  this[1] = &PTR_LAB_01765138;
  if ((this[5] == 1) && (this[0xc] != 0)) {
    do {
      FUN_0045d60b(*(undefined4 *)this[0xb],this + 10);
      piVar1 = (int *)FUN_004644df();
      if (*(int *)(*piVar1 + 0x44) == 0) {
        local_8 = this;
        FUN_004730b4(&local_8);
        FUN_0045d60b(*(undefined4 *)this[0xb],this + 10);
        FUN_004704a4(local_20,local_10,local_c);
      }
      else {
        FUN_00479514();
      }
    } while (this[0xc] != 0);
  }
  FUN_00476fe6();
  FUN_00526562();
  FUN_0040e872();
  FUN_00526562();
  FUN_00526562();
  FUN_00526562();
  FUN_0046daba();
  FUN_0046dbfe();
  if ((int *)this[0x12] != (int *)0x0) {
    (**(code **)(*(int *)this[0x12] + 0x10))(0);
  }
  if ((int *)this[0x11] != (int *)0x0) {
    (**(code **)(*(int *)this[0x11] + 0x10))(0);
  }
  FUN_00470e57();
  FUN_00470e57();
  if (this[9] != 0) {
    FUN_00459af8();
  }
  this[1] = &PTR_LAB_0175c44c;
  *this = GInterface::vftable;
  return;
}

