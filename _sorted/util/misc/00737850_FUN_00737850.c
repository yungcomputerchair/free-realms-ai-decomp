// addr: 0x00737850
// name: FUN_00737850
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void wrapped_resource_release(void * dst, void * src, void * resource) */

void wrapped_resource_release(void *dst,void *src,void *resource)

{
  undefined4 uVar1;
  
                    /* Releases or finalizes a resource by deriving a handle from the third
                       argument, passing it to a cleanup helper, then forwarding all arguments to
                       another helper. */
  uVar1 = FUN_00fac2d0(resource);
  FUN_00745a70(uVar1);
  FUN_00fad050(dst,src,resource);
  return;
}

