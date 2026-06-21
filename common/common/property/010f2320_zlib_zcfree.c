// addr: 0x010f2320
// name: zlib_zcfree
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void zlib_zcfree(void * opaque, void * ptr) */

void zlib_zcfree(void *opaque,void *ptr)

{
                    /* Default zlib free callback that ignores opaque and frees the supplied
                       pointer. Installed when a stream has no custom zfree. */
                    /* WARNING: Subroutine does not return */
  _free(ptr);
}

