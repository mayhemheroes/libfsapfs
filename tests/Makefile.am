AUTOMAKE_OPTIONS = subdir-objects

AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCERROR_CPPFLAGS@ \
	@LIBCTHREADS_CPPFLAGS@ \
	@LIBCDATA_CPPFLAGS@ \
	@LIBCLOCALE_CPPFLAGS@ \
	@LIBCNOTIFY_CPPFLAGS@ \
	@LIBCSPLIT_CPPFLAGS@ \
	@LIBUNA_CPPFLAGS@ \
	@LIBCFILE_CPPFLAGS@ \
	@LIBCPATH_CPPFLAGS@ \
	@LIBBFIO_CPPFLAGS@ \
	@LIBFCACHE_CPPFLAGS@ \
	@LIBFDATA_CPPFLAGS@ \
	@LIBFDATETIME_CPPFLAGS@ \
	@LIBFGUID_CPPFLAGS@ \
	@LIBFMOS_CPPFLAGS@ \
	@LIBCRYPTO_CPPFLAGS@ \
	@LIBHMAC_CPPFLAGS@ \
	@LIBCAES_CPPFLAGS@ \
	@ZLIB_CPPFLAGS@ \
	@PTHREAD_CPPFLAGS@ \
	@LIBFSAPFS_DLL_IMPORT@

if HAVE_PYTHON_TESTS
TESTS_PYFSAPFS = \
	test_python_module.sh
endif

TESTS = \
	test_library.sh \
	test_tools.sh \
	test_fsapfsinfo.sh \
	test_fsapfsinfo_bodyfile.sh \
	$(TESTS_PYFSAPFS)

check_SCRIPTS = \
	pyfsapfs_test_support.py \
	test_tools.sh \
	test_fsapfsinfo.sh \
	test_fsapfsinfo_bodyfile.sh \
	test_library.sh \
	test_manpage.sh \
	test_python_module.sh \
	test_runner.sh

EXTRA_DIST = \
	$(check_SCRIPTS)

check_PROGRAMS = \
	fsapfs_test_bit_stream \
	fsapfs_test_btree_entry \
	fsapfs_test_btree_footer \
	fsapfs_test_btree_node \
	fsapfs_test_btree_node_header \
	fsapfs_test_buffer_data_handle \
	fsapfs_test_checkpoint_map \
	fsapfs_test_checkpoint_map_entry \
	fsapfs_test_checksum \
	fsapfs_test_chunk_information_block \
	fsapfs_test_compressed_data_handle \
	fsapfs_test_compression \
	fsapfs_test_container \
	fsapfs_test_container_data_handle \
	fsapfs_test_container_key_bag \
	fsapfs_test_container_reaper \
	fsapfs_test_container_superblock \
	fsapfs_test_data_block \
	fsapfs_test_data_block_data_handle \
	fsapfs_test_data_block_vector \
	fsapfs_test_data_stream \
	fsapfs_test_deflate \
	fsapfs_test_directory_record \
	fsapfs_test_encryption_context \
	fsapfs_test_error \
	fsapfs_test_extended_attribute \
	fsapfs_test_extent_reference_tree \
	fsapfs_test_file_extent \
	fsapfs_test_file_system \
	fsapfs_test_file_system_btree \
	fsapfs_test_file_system_data_handle \
	fsapfs_test_fusion_middle_tree \
	fsapfs_test_huffman_tree \
	fsapfs_test_inode \
	fsapfs_test_io_handle \
	fsapfs_test_key_bag_entry \
	fsapfs_test_key_bag_header \
	fsapfs_test_key_encrypted_key \
	fsapfs_test_name \
	fsapfs_test_name_hash \
	fsapfs_test_notify \
	fsapfs_test_object \
	fsapfs_test_object_map \
	fsapfs_test_object_map_btree \
	fsapfs_test_object_map_descriptor \
	fsapfs_test_profiler \
	fsapfs_test_snapshot \
	fsapfs_test_snapshot_metadata \
	fsapfs_test_snapshot_metadata_tree \
	fsapfs_test_space_manager \
	fsapfs_test_support \
	fsapfs_test_tools_info_handle \
	fsapfs_test_tools_output \
	fsapfs_test_tools_signal \
	fsapfs_test_volume \
	fsapfs_test_volume_key_bag \
	fsapfs_test_volume_superblock

fsapfs_test_bit_stream_SOURCES = \
	fsapfs_test_bit_stream.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_bit_stream_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_btree_entry_SOURCES = \
	fsapfs_test_btree_entry.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_btree_entry_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_btree_footer_SOURCES = \
	fsapfs_test_btree_footer.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_btree_footer_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_btree_node_SOURCES = \
	fsapfs_test_btree_node.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_btree_node_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_btree_node_header_SOURCES = \
	fsapfs_test_btree_node_header.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_btree_node_header_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_buffer_data_handle_SOURCES = \
	fsapfs_test_buffer_data_handle.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_buffer_data_handle_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_checkpoint_map_SOURCES = \
	fsapfs_test_checkpoint_map.c \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_checkpoint_map_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_checkpoint_map_entry_SOURCES = \
	fsapfs_test_checkpoint_map_entry.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_checkpoint_map_entry_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_checksum_SOURCES = \
	fsapfs_test_checksum.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_checksum_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_chunk_information_block_SOURCES = \
	fsapfs_test_chunk_information_block.c \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_chunk_information_block_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_compressed_data_handle_SOURCES = \
	fsapfs_test_compressed_data_handle.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfdata.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_compressed_data_handle_LDADD = \
	@LIBFDATA_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_compression_SOURCES = \
	fsapfs_test_compression.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_compression_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_container_SOURCES = \
	fsapfs_test_container.c \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_getopt.c fsapfs_test_getopt.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libclocale.h \
	fsapfs_test_libcnotify.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_libuna.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_rwlock.c fsapfs_test_rwlock.h \
	fsapfs_test_unused.h

fsapfs_test_container_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCTHREADS_LIBADD@ \
	@LIBCERROR_LIBADD@ \
	@PTHREAD_LIBADD@

fsapfs_test_container_data_handle_SOURCES = \
	fsapfs_test_container_data_handle.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_container_data_handle_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_container_key_bag_SOURCES = \
	fsapfs_test_container_key_bag.c \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_container_key_bag_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_container_reaper_SOURCES = \
	fsapfs_test_container_reaper.c \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_container_reaper_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_container_superblock_SOURCES = \
	fsapfs_test_container_superblock.c \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_container_superblock_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_data_block_SOURCES = \
	fsapfs_test_data_block.c \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_data_block_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_data_block_data_handle_SOURCES = \
	fsapfs_test_data_block_data_handle.c \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcdata.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_data_block_data_handle_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_data_block_vector_SOURCES = \
	fsapfs_test_data_block_vector.c \
	fsapfs_test_libcdata.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfdata.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_data_block_vector_LDADD = \
	@LIBFDATA_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_data_stream_SOURCES = \
	fsapfs_test_data_stream.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfdata.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_unused.h

fsapfs_test_data_stream_LDADD = \
	@LIBFDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_deflate_SOURCES = \
	fsapfs_test_deflate.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libcnotify.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_unused.h

fsapfs_test_deflate_LDADD = \
	@LIBCNOTIFY_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_directory_record_SOURCES = \
	fsapfs_test_directory_record.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_directory_record_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_encryption_context_SOURCES = \
	fsapfs_test_encryption_context.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_encryption_context_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_error_SOURCES = \
	fsapfs_test_error.c \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_unused.h

fsapfs_test_error_LDADD = \
	../libfsapfs/libfsapfs.la

fsapfs_test_extended_attribute_SOURCES = \
	fsapfs_test_extended_attribute.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_extended_attribute_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_extent_reference_tree_SOURCES = \
	fsapfs_test_extent_reference_tree.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_extent_reference_tree_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_file_extent_SOURCES = \
	fsapfs_test_file_extent.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_file_extent_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_file_system_SOURCES = \
	fsapfs_test_file_system.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_file_system_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_file_system_btree_SOURCES = \
	fsapfs_test_file_system_btree.c \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_file_system_btree_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_file_system_data_handle_SOURCES = \
	fsapfs_test_file_system_data_handle.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_file_system_data_handle_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_fusion_middle_tree_SOURCES = \
	fsapfs_test_fusion_middle_tree.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_fusion_middle_tree_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_huffman_tree_SOURCES = \
	fsapfs_test_huffman_tree.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_huffman_tree_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_inode_SOURCES = \
	fsapfs_test_inode.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_inode_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_io_handle_SOURCES = \
	fsapfs_test_io_handle.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_io_handle_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_key_bag_entry_SOURCES = \
	fsapfs_test_key_bag_entry.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_key_bag_entry_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_key_bag_header_SOURCES = \
	fsapfs_test_key_bag_header.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_key_bag_header_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_key_encrypted_key_SOURCES = \
	fsapfs_test_key_encrypted_key.c \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h

fsapfs_test_key_encrypted_key_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_name_SOURCES = \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_libuna.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_name.c \
	fsapfs_test_types.h \
	fsapfs_test_unicode_case_folding_mappings.h \
	fsapfs_test_unicode_decomposition_mappings.h \
	fsapfs_test_unused.h

fsapfs_test_name_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_name_hash_SOURCES = \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_name_hash.c \
	fsapfs_test_unused.h

fsapfs_test_name_hash_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_notify_SOURCES = \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_notify.c \
	fsapfs_test_unused.h

fsapfs_test_notify_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_object_SOURCES = \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_object.c \
	fsapfs_test_unused.h

fsapfs_test_object_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_object_map_SOURCES = \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_object_map.c \
	fsapfs_test_unused.h

fsapfs_test_object_map_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_object_map_btree_SOURCES = \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_object_map_btree.c \
	fsapfs_test_unused.h

fsapfs_test_object_map_btree_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_object_map_descriptor_SOURCES = \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_object_map_descriptor.c \
	fsapfs_test_unused.h

fsapfs_test_object_map_descriptor_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_profiler_SOURCES = \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_profiler.c \
	fsapfs_test_unused.h

fsapfs_test_profiler_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_snapshot_SOURCES = \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_snapshot.c \
	fsapfs_test_unused.h

fsapfs_test_snapshot_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_snapshot_metadata_SOURCES = \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_snapshot_metadata.c \
	fsapfs_test_unused.h

fsapfs_test_snapshot_metadata_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_snapshot_metadata_tree_SOURCES = \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_snapshot_metadata_tree.c \
	fsapfs_test_unused.h

fsapfs_test_snapshot_metadata_tree_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_space_manager_SOURCES = \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_space_manager.c \
	fsapfs_test_unused.h

fsapfs_test_space_manager_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_support_SOURCES = \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_getopt.c fsapfs_test_getopt.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libclocale.h \
	fsapfs_test_libcnotify.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_libuna.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_support.c \
	fsapfs_test_unused.h

fsapfs_test_support_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_tools_info_handle_SOURCES = \
	../fsapfstools/digest_hash.c ../fsapfstools/digest_hash.h \
	../fsapfstools/info_handle.c ../fsapfstools/info_handle.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_tools_info_handle.c \
	fsapfs_test_unused.h

fsapfs_test_tools_info_handle_LDADD = \
	@LIBHMAC_LIBADD@ \
	@LIBFGUID_LIBADD@ \
	@LIBFDATETIME_LIBADD@ \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@ \
	@LIBCRYPTO_LIBADD@ \
	@LIBDL_LIBADD@

fsapfs_test_tools_output_SOURCES = \
	../fsapfstools/fsapfstools_output.c ../fsapfstools/fsapfstools_output.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_macros.h \
	fsapfs_test_tools_output.c \
	fsapfs_test_unused.h

fsapfs_test_tools_output_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_tools_signal_SOURCES = \
	../fsapfstools/fsapfstools_signal.c ../fsapfstools/fsapfstools_signal.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_macros.h \
	fsapfs_test_tools_signal.c \
	fsapfs_test_unused.h

fsapfs_test_tools_signal_LDADD = \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_volume_SOURCES = \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_getopt.c fsapfs_test_getopt.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libclocale.h \
	fsapfs_test_libcnotify.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_libuna.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_rwlock.c fsapfs_test_rwlock.h \
	fsapfs_test_unused.h \
	fsapfs_test_volume.c

fsapfs_test_volume_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCTHREADS_LIBADD@ \
	@LIBCERROR_LIBADD@ \
	@PTHREAD_LIBADD@

fsapfs_test_volume_key_bag_SOURCES = \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h \
	fsapfs_test_volume_key_bag.c

fsapfs_test_volume_key_bag_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

fsapfs_test_volume_superblock_SOURCES = \
	fsapfs_test_functions.c fsapfs_test_functions.h \
	fsapfs_test_libbfio.h \
	fsapfs_test_libcerror.h \
	fsapfs_test_libfsapfs.h \
	fsapfs_test_macros.h \
	fsapfs_test_memory.c fsapfs_test_memory.h \
	fsapfs_test_unused.h \
	fsapfs_test_volume_superblock.c

fsapfs_test_volume_superblock_LDADD = \
	@LIBBFIO_LIBADD@ \
	@LIBCPATH_LIBADD@ \
	@LIBCFILE_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBCSPLIT_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBCLOCALE_LIBADD@ \
	@LIBCDATA_LIBADD@ \
	../libfsapfs/libfsapfs.la \
	@LIBCERROR_LIBADD@

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile

