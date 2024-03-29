/*
 * Copyright (C) 2017 Santiago León O. <santileortiz@gmail.com>
 */

#if !defined(APP_API_H)

typedef enum {
    APP_POINT_SET_MODE,
    APP_GRID_MODE,
    APP_TREE_MODE,

    NUM_APP_MODES
} app_mode_t;

struct app_state_t {
    bool is_initialized;

    bool end_execution;
    bool download_database;
    app_mode_t app_mode;
    struct point_set_mode_t *ps_mode;
    struct grid_mode_state_t *grid_mode;
    struct tree_mode_state_t *tree_mode;
    struct database_download_t *dl_st;

    struct gui_state_t gui_st;

    mem_pool_t memory;
    struct config_t *config;

    // NOTE: This will be cleared at every frame start
    mem_pool_t temporary_memory;
    mem_pool_marker_t temporary_memory_flush;
};

#define APP_API_H
#endif
